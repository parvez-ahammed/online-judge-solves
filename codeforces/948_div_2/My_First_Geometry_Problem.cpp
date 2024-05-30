#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    string str;
    cin >> str;

    int val = 0;

    for (int i = 0; i < str.size(); i++) {

        if (str[i] == '1') {
            val += pow(2, str.size() - i - 1);
        }
    }

    int ans = -1;

    if (val == 0)
        ans = 1;
    if (val == 1 or val == 2 or val == 4 or val == 8)
        ans = 11;
    if (val == 3 or val == 12)
        ans = 21;
    if (val == 5 or val == 6 or val == 9 or val == 10)
        ans = 121;
    if (val == 13 or val == 14 or val == 11 or val == 7)
        ans = 231;
    if (val == 15)
        ans = 441;

    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}