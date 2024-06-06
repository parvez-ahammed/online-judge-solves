#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
 
    vector<int> a(26, 0);

    for (int i = 0; i < n; i++) {
        a[s[i] - 'A']++;
    }

    int ans = 0;

    for (int i = 0; i <= 6; i++) {

        ans += max(m - a[i], 0);
    }

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