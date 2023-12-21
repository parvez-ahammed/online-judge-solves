#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int MAXN = 1e5 + 5;

const int NUMBER_OF_ACTIVITY = 3;
int activity[MAXN][NUMBER_OF_ACTIVITY + 1], dp[MAXN][NUMBER_OF_ACTIVITY + 1];

int N;

// defining the state aas max hapiness one can get by choosing j th activity on ith day
int maxHappiness(int day, int act)
{

    if (day == N)
        return dp[day][act] = activity[day][act];

    if (dp[day][act] != -1)
        return dp[day][act];

    int ans = INT_MIN;

    for (int i = 1; i <= 3; i++) {
        int happiness = activity[day][act];
        if (i != act) {

            happiness += maxHappiness(day + 1, i);
            ans = max(ans, happiness);
        }
    }

    return dp[day][act] = ans;
}
void solve()
{

    memset(dp, -1, sizeof(dp));

    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 3; j++) {
            cin >> activity[i][j];
        }
    }

    cout << maxHappiness(0, 0) << endl;
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