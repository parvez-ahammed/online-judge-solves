#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;

    cin >> n;
    string str;

    char encoder = '#';
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        str += s;

        str += encoder;
    }

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == encoder) {
            cout << " ";
        } else
            cout << str[i];
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}