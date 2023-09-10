#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    string s ;
    char c ;
    cin >> s >> c;

    int n = s.size();

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == c and i % 2== 0)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES"<< endl;
        
    }
    else
    {
        cout << "NO" << endl;
    
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}