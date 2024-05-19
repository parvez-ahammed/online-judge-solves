#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int maxn = 1e6 + 5;
int dp[maxn];
int MOD = 1e9 + 7;

int getWay(int n)
{

    if (n == 0)
        return 1;
    if (dp[n] != -1)
        return dp[n];

    int cnt = 0;

    for (int i = 1; i <= min(n, 6); i++) {
        cnt += getWay(n - i);
        cnt %= MOD;
    }

    return dp[n] = cnt;
}

void solve()
{

    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));

    cout << getWay(n) << endl;
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