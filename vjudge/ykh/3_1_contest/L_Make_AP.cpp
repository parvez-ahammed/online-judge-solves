#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool middle = ((a + c) % (2 * b) == 0);
    bool left = ((2 * b - a) > 0 && (2 * b - a) % c == 0);
    bool right = ((2 * b - c) > 0 && (2 * b - c) % a == 0);

    if (right or left or middle)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}