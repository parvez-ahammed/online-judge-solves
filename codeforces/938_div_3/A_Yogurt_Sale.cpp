#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, a, b;
    cin >> n >> a >> b;

    int usingBonus1 = INT_MAX;
    int usingBonus2 = INT_MAX;

    if (n % 2 == 0) {
        usingBonus1 = (n / 2) * b;

    } else {
        usingBonus1 = (n / 2) * b + a;
    }

    int withoutBonus = n * a;

    cout << min({ usingBonus1, usingBonus2, withoutBonus }) << endl;
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