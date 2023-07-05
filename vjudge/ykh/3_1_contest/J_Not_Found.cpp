#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
 int a[26];
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   

    string str;cin >> str;

    int ans = -1;

    rep(0, str.size()) a[str[i] -'a']++;

    rep(0,26) 
    {
        if (a[i] == 0)
        {
            ans = i;
            break;
        }
    }

    ans == -1 ? cout << "None" << endl :cout << char('a'+ans) << endl;
    return 0;
}