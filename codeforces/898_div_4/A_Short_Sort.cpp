#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    string s ;
    cin >> s;

    int cnt = 0;

    s[0] != 'a' ? cnt++ : cnt = cnt;
    s[1] != 'b' ? cnt++ : cnt = cnt;
    s[2] != 'c' ? cnt++ : cnt = cnt;

    cnt > 2 ? cout << "NO" << endl : cout << "YES" << endl;
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