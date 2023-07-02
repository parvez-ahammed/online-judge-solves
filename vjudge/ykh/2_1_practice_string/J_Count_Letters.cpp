#include <bits/stdc++.h>
using namespace std;


void solve()
{

    string str;
    cin >> str;
    vector<int> v(26, 0);

    for (int i = 0; i < str.size(); i++)
        v[str[i] - 97]++;

    for (int i = 0; i < v.size(); i++)
        if (v[i] != 0)
            cout<< char (i+97)<< " : " << v[i] << endl;
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