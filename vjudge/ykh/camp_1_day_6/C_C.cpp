#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    int ans = 0;

    for (int i = 0; i < n; i++) {

        int l = i;
        int r = i;

        while (l >= 0 and r < n and s[l] == s[r]) {
            ans = max(ans, r - l + 1);
            l--;
            r++;
        }

        l = i;
        r = i + 1;

        while (l >= 0 and r < n and s[l] == s[r]) {
            ans = max(ans, r - l + 1);
            l--;
            r++;
        }
    }

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