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
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            str[i] = (str[i] == 'a' ? 'b' : 'a');
        else
            str[i] = (str[i] == 'z' ? 'y' : 'z');
    }

    cout << str << endl;
}
int32_t main()
{

    FAST;
    int n;
    cin >> n;
    while (n--)
        solve();
    return 0;
}