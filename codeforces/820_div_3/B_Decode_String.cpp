#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    int n;
    string str;
    cin >> n >> str;

    string ans = "";

    vector<int> v;
    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == '0')
        {

            v.push_back(((str[i - 2] - '0') * 10) + ((str[i - 1] - '0') * 1));
            i -= 2;
        }
        else
            v.push_back(((str[i] - '0') * 1));
    }

    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
        cout << char('a' + (v[i] - 1));

    cout << endl;
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