#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())
void solve()
{

    ll a, b;
    cin >> a >> b;

    int for_a = 0, for_b = 0;
    a--;

    for_a = a % 3 == 0 ? a - (a / 3) : a - (a / 3) - 1;
    for_b = b % 3 == 0 ? b - (b / 3) : b - (b / 3) - 1;

    cout << for_b - for_a<< endl;
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