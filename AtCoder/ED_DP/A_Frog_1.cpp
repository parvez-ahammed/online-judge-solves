#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MAXN = 1e5 + 5;

int h[MAXN], dp[MAXN];
int N;
int K;

// defining the state as the min cost needed to reach from currStep to N step

int minCost(int currStep)
{
    if (currStep == N) {
        return 0;
    }

    if (dp[currStep] != -1)
        return dp[currStep];

    int ans = INT_MAX;
    int limit = min(currStep + K, N);
    for (int i = currStep + 1; i <= limit; i++) {
        int stepCount = i;
        int fixedCost = abs(h[currStep] - h[stepCount]);

        ans = min(ans, fixedCost + minCost(stepCount));
    }

    return dp[currStep] = ans;
}
void solve()
{

    memset(dp, -1, sizeof(dp));
    K = 2;
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> h[i];

    cout << minCost(1);
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