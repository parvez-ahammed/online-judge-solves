#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
vector<int> v;

vector<pair<int, int>> ans;
int N, K;

bool ok(int mid)
{
    // ami mid poriman kore katte chai tar poriman er koyta element ase

    int sum = 0;

    for (int i = 0; i < ans.size(); i++) {
        sum += ans[i].first / mid;
    }

    return sum >= K;
}

int bs()
{
    int l = 1, r = v.size(), ans = 0, mid = 0;

    while (l <= r) {
        mid = (l + r) / 2;

        int sum = 0;

        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}
void solve()
{

    cin >> N >> K;

    v.resize(N);
    map<int, int> mp;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    for (auto it : mp) {
        ans.push_back({ it.second, it.first });
    }
    sort(ans.rbegin(), ans.rend());

    int mn = bs();

    vector<int> res;
    
    for (int i = 0; i < K; i++) {

        int times = ans[i].first / mn;

        for (int j = 0; j < times; j++) {
            res.push_back(ans[i].second);

            if (res.size() == K)
                break;
        }

        if (res.size() == K)
            break;
    }

    for (auto it : res) {
        cout << it << " ";
    }

    cout << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;

    while (tc--) {
        solve();
    }
    return 0;
}