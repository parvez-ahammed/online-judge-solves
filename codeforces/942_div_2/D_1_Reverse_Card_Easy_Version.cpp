#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, m;
    cin >> n >> m;
    int cnt = n;

    map<int, vector<int>> mp;
    for (int b = 2; b <= m; b++) {
        for (int a = b; a <= n; a += b) {

            int sum = a + b;
            int gcd = __gcd(a, b);
            if (((a + b) / __gcd(a, b)) % b == 0) {
                cnt++;
                mp[b].push_back(a);
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