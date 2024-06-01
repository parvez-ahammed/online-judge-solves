#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, l, r;
    cin >> n >> l >> r;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++) {

        v[i] = i;
    }

    reverse(v.begin() + l, v.begin() + r + 1);

    for (int i = 1; i <= n; i++) {
        cout << v[i] << " ";
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