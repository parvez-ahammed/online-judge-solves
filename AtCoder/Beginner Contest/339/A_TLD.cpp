#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    string s;
    cin >> s;

    string ans = "";

    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '.')
            break;

        ans += s[i];
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
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