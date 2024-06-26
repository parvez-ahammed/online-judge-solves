#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(n);

    map<int, int> modA, modB;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] = a[i] % m;
        modA[a[i]]++;
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        b[i] = b[i] % m;
        modB[b[i]]++;
    }

    ll ans = 0;

    for (auto i : modA) {
        int x = i.first;
        int y = (m - x) % m;
        ans += (1ll * modA[x] * modB[y]);
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