#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MAXN = 2e5 + 10;
struct GAME {
    int a, b, x;
};
vector<GAME> v(MAXN);

ll dp[MAXN][2];
ll N;
ll getMinimumSeconds(int at = 0, int stage = 0)
{
    if (at >= N) {
        return 0;
    }
    if (dp[at][stage] != -1) {
        return dp[at][stage];
    }

    dp[at][0] = v[at].a + getMinimumSeconds(at + 1, 0);

    if (v[at].x > stage)
        dp[at][1] = v[at].b + getMinimumSeconds(v[at].x, 1);
    else
        dp[at][1] = dp[at][0];

    return min(dp[at][0], dp[at][1]);
}

void solve()
{

    cin >> N;
    memset(dp, -1, sizeof(dp));

    for (int i = 1; i <= N - 1; i++) {
        cin >> v[i].a >> v[i].b >> v[i].x;
    }

    cout << getMinimumSeconds() << endl;
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