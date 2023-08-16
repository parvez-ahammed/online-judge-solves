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

    if (str.size() <= 10)
    {
        cout << str << endl;
        return;
    }
    cout << str[0] << str.size() - 2 << str.back() << endl;
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