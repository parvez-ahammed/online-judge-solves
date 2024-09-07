#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int l, r;
    cin >> l >> r;

    int cnt = 0;

    for (int i = l; i <= r; i++)
        cnt += i % 2;
    cout << cnt / 2 << '\n';
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