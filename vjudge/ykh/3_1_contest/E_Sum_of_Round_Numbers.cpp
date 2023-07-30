#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{
    string str;
    cin >> str;
    vector<string> v;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        string ans = "";
        ans += str[i];

        if (ans != "0")
        {
            for (int j = 1; j < str.size() - i; j++)
                ans += '0';

            v.insert(v.begin(), ans);
        }
    }

    cout << v.size() << endl;

    rep(0, v.size()) cout << v[i] << " ";

    cout << endl;
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