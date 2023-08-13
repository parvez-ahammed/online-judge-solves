#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    string str;
    cin >> str;

    int truth = 0, lie = str.size() - 1;
    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] == '1')
            truth = max (truth, i);
        if (str[i] == '0')
            lie = min (lie ,i);
    }
   
    cout << lie - truth + 1 << endl;
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}