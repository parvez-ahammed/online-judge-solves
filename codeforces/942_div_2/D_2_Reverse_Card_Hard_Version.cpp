#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, m;
    cin >> n >> m;
    int cnt = 0;

    map<int, vector<int>> mp;
    for (int b = 1; b <= m; b++) {
        for (int a = 1; a <= n; a++) {

            int sum = a + b;
            int gcd = __gcd(a, b);
            ll  bGcd = 1ll * b * gcd;
            if (bGcd % sum == 0) {
                cnt++;
                mp[b].push_back(a);
            }
        }
    }

    // print the map for debugging

    for (auto x : mp) {
        cout << x.first << " : ";
        for (auto y : x.second) {
            cout << y << " ";
        }
        cout << endl;
    }


    cout << cnt << endl;
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