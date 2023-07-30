#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int a[20];
void solve()
{
    int n;
    cin >> n;

    cout << a[n] % 10 << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    a[1] = 1;

    rep(2, 15) a[i] = a[i - 1] * i;
    cin >> tc;

    while (tc--)
        solve();
    return 0;
}