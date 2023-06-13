#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())
void solve()
{

    int n;
    cin >> n;
    ll donation = 0;

    while (n--)
    {
        string str;

        cin >> str;

        if (str == "donate")
        {
            ll amount = 0;
            cin >> amount;
            donation += amount;
        }
        else
        {
            cout << donation << endl;
        }
    }
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
        cout << "Case " << i++ << ": " << endl;
        solve();
    }
    return 0;
}