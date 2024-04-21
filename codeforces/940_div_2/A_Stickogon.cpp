#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }

    int cnt = 0;

    for (int i = 3; i <= 100; i++) {
        for (auto x : mp) {
            if (x.second >= i) {
                int a = x.second;
                int res = a / i;
                a -= res * i;
                cnt += res;
                mp[x.first] = a;
            }
        }
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