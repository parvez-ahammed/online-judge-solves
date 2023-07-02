#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str, str2;

    cin >> str;
    str2 = str;
    reverse(str.begin(), str.end());

    if (str == str2)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}