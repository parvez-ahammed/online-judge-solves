#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())

void solve()
{
    int a, b, c;

    cin >> a >> b >> c;

    ((a * a == (b * b) + (c * c)) || (b * b == (a * a) + (c * c)) || (c * c == (a * a) + (b * b))) ? cout << "yes" : cout << "no";
    cout << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--)
    {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}