#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int f(int x, int a)
{
    return (x / a) + x % a;
}

void solve()
{
    int l, r, a;

    cin >> l >> r >> a;

    int s;
    s = (r + 1) / a;
    s *= a;
    s--;

    if (s < l || a == 1)
        cout << f(r, a) << endl;
    else
        cout << f(s, a) << endl;
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
    return 0;
}
