#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{
    int n;
    cin >> n;
    bool hasZero = false;
    int negCount = 0;
    int a;
    rep(0, n)
    {
        cin >> a;
        negCount += (a < 0 ? 1 : 0);

        if (a == 0)
            hasZero = true;
    }

    (hasZero or !(negCount & 1))
        ? cout << 0 << endl
        : cout << 1 << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}