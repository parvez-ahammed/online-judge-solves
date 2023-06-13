#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int

void solve()
{
    ll p, s, r;
    cin >> p >> s >> r;

    p - s == 0 && r != 1 ? cout << "No" : cout << "Yes";
    cout << endl;
}

int32_t main()
{

    int tc = 1;
    cin >> tc;
    int i = 1;
    while (tc--)
    {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}