#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    if (n <= 3) {
        cout << 1 << endl;
        cout << n << endl;
        return;
    }
    int cnt = n / 2;
    cout << cnt << endl;

    int start = (n & 1 ? 1 : 0);

    for (int i = start; i < cnt; i++)
        cout << 2 << " ";

    if (n & 1) {
        cout << 3 << endl;
    }
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