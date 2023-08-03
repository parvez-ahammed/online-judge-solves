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
    cout << (str[0] - '0') + (str[2] - '0') << endl;
}
int32_t main()
{

    FAST int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}