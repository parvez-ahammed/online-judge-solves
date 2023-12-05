#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<pair<int, int>> v;

bool ok(int mid)
{
    int minPos = -mid, maxPos = mid;
    int n = v.size();
    for (int i = 0; i < n; i++) {

        minPos = max(minPos, v[i].first);
        maxPos = min(maxPos, v[i].second);

        if (minPos > maxPos)
            return false;
            
        minPos -= mid;
        maxPos += mid;
    }
    return true;
}

int binarySearch()
{
    int l = 0, r = 1e9 + 5, ans = 0;

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