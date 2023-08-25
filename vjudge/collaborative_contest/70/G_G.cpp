#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int m, d;
    cin >> m >> d;

    vector<int> v(d);
    for (int i = 0; i < d; i++) {
        cin >> v[i];
    }

    // starting day is sunday

    int ans = 0;

    int day = 0;

    for (int i = 0; i < d; i++) {

        int dayWeek = (day + 13) % 7;

        if (dayWeek == 6 and 13 <= v[i])
            ans++;

        day += v[i];
    }

    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}