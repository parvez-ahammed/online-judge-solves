#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    string s;
    cin >> s;
    if (s.size() % 2== 1)
    {
        cout << "NO"<< endl;
        return;
    }

    for (int i = 0 ; i < s.size() /2  ; i++)
    {
        if (s[i] != s[s.size() / 2 + i])
        {
            cout << "NO"<< endl;
            return;
        }
    }

    cout << "YES"<< endl;
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