#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{
    string str;
    cin >> str;

    string ans = "https://";
    bool nowTake = false;
    rep(1, str.size())
    {
        if (nowTake)
            ans += str[i];

        if (str[i] == '/' && str[i - 1] == '/')
            nowTake = true;
    }

    cout << ans << endl;
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