#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int dp[1005][1005][2];
vector<int> a(1005);

int N;

int getItem(int at = 1, int lastTaken = 1002, int total = 0, bool firstTaken = false)
{

    if (at == N) {
        return total + (lastTaken + 1 != at and !firstTaken ? a[at] : 0);
    }


    if (dp[at][lastTaken][firstTaken] != -1) {
        return dp[at][lastTaken][firstTaken];
    }

    int takeItem = total, skipItem = total;
    if (lastTaken + 1 != at) {

        if (at == 1)
            firstTaken = true;
        takeItem = getItem(at + 1, at, total + a[at], firstTaken);
    }
    if (at == 1)
        firstTaken = false;

    skipItem = getItem(at + 1, lastTaken, total, firstTaken);

    if (takeItem > skipItem)
        return dp[at][lastTaken][0] = takeItem;
    return dp[at][lastTaken][1] = skipItem;
}
void solve()
{

    cin >> N;

    for (int i = 1; i <= N; i++)
        cin >> a[i];

    memset(dp, -1, sizeof(dp));

    cout << getItem() << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}
