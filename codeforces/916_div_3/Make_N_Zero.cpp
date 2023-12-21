#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    if (n < 3) {
        cout << "NO" << endl;
        return;
    }

    if (n % 3 == 0 or n % 4 == 0) {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i*3 <= n; i++) {

       
        if ((n - (i * 3)) % 4 == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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