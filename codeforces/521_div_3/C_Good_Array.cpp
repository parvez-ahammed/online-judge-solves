#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);

    int sum = 0;

    map<int, vector<int>> mp;

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        sum += v[i];
        mp[v[i]].push_back(i);
    }

    set<int> ans;

    for (int i = 1; i <= n; i++) {

        int soBadDiteHobe = sum - (2 * v[i]);

        if (mp.count(soBadDiteHobe) != 0) {
            for (int j = 0; j < mp[soBadDiteHobe].size(); j++) {

                int val = mp[soBadDiteHobe][j];

                if (val != i)
                    ans.insert(val);
            }
        }
    }

    cout << ans.size() << endl;

    for (auto it : ans) {
        cout << it << " ";
    }

    cout << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}