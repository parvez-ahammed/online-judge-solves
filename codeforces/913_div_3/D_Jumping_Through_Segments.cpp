#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<pair<int, int>> v;


bool ok(int mid)
{
    int pos = 0;
    //cout << mid << endl;
    v[0].second =  mid;

    for (int i = 1; i < v.size(); i++) {
        v[i].second = v[i].first+ mid;
    }
    for (int i = 1; i < v.size(); i++)

    {
        if (v[i].first > v[i - 1].second) {
            if (v[i].first - v[i - 1].second > mid) {
                //cout << "RIGHT" << endl;
                return false;
            }
        }
        if (v[i].second < v[i - 1].first) {
            if (v[i - 1].first - v[i].second > mid) {
                //cout << v[i].second << " " << v[i - 1].first << endl;
               // cout << "LEFT" << endl;
                return false;
            }
        }
    }

    return true;
}

int binarySearch()
{
    int l = 0, r = 20, ans = 0;

    while (l <= r) {
        int mid = (l + r) / 2;

        // minimize the value of the answer

        if (ok(mid)) {
            ans = mid;
            r = mid - 1;

        } else {
            l = mid + 1;
        }
    }

    return ans;
}
void solve()
{

    int n;
    cin >> n;

    v.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    cout << binarySearch() << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}