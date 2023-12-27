#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> v(n);
    for (auto& x : v)
        cin >> x;

    int cnt = 0;

    int mx = v[0];

    for (int i = 1; i < n; i++) {

        cnt += (v[i] < mx);

        mx = max(mx, v[i]);
    }

    cout << cnt << endl;
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