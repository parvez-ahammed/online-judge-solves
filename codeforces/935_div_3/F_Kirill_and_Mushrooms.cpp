#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update> multi_ordered_set;
// practice 
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1), p(n + 1);
    multi_ordered_set ms;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pair<int, int> pr = { -a[i], i };
        ms.insert(pr);
    }
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    ll ans = LONG_LONG_MIN;
    int x = 1;

    int half = (n + 1) / 2;

    for (int i = 0; i < half; i++) {
        pair<int, int> pr = { -a[p[i]], p[i] };

        if (i) {
            ms.erase(ms.find({ pr }));
        }

        auto [val, ind] = *ms.find_by_order(i);

        val *= -1;
        if (ans < val * (i + 1)) {
            ans = val * (i + 1);
            x = i + 1;
        }
    }

    cout << ans << ' ' << x << endl;
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