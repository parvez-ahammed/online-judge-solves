#include <bits/stdc++.h>
using namespace std;

#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{

    int n0, n1, n2;
    cin >> n0 >> n1 >> n2;
    string str2 = "", str1 = "", str0 = "";

    if (n2)
        for (int i = 0; i <= n2; i++)
            str2 += '1';

    if (n0)
    {
        for (int i = 0; i <= n0; i++)
            str0 += '0';
    }

    int one = 1;
    if (n1)
    {
        for (int i = 0; i <= n1; i++)
        {
            one ? str1 += '1' : str1 += '0';
            one ^= 1;
        }
    }

    string ans = str2;

    if (str2.size() > 0 && str1.size() > 0)
        str1.erase(str1.begin());

    if (str0.size() > 0 && str1.size() > 0)
    {
        if (str1[str1.size() - 1] == '0')
        {
            ans += str1;
            str0.erase(str0.begin());
            ans += str0;
        }
        else if (str1.size() > 0)
        {
            str1.erase(str1.end() - 1);
            str0.erase(str0.begin());

            str1 += str0;
            str1 += '1';
            ans += str1;
        }
    }
    else
    {
        ans += str1;
        ans += str0;
    }

    cout << ans << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }
    return 0;
}