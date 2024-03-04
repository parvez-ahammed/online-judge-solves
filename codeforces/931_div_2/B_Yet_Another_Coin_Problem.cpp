#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    vector<int> coins = { 15, 10, 6, 3, 1 };
    map<int, int> mp = { { 15, 1 }, { 10, 1 }, { 6, 1 }, { 3, 1 }, { 1, 1 } };
    int cnt = 0;

    for (int i = 0; i < 5; i++) {
        int contrib = 0;
        if (n >= coins[i]) {

            contrib = n / coins[i];
            int oneMinus = contrib - 1;

            int mx = min(i + 1, 4);

            int forContrib = (n - (contrib * coins[i])) % coins[mx];
            int forOneMinus = (n - (oneMinus * coins[i])) % coins[mx];

            if (forOneMinus == 0 and forContrib != 0) {
                contrib--;
            } else if (forContrib > forOneMinus and mp[forContrib] != 1 and mp[forOneMinus] == 1) {
                contrib--;
            }
        }
        
        n -= (contrib * coins[i]);
        cnt += contrib;
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

// 98 = 5 * 15 + 2 * 10 + 1*3
