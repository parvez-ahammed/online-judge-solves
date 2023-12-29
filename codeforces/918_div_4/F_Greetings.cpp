#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    ordered_set<int> s;
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    ll ans = 0;
    for (auto x : v) {
        s.insert(x.second);
    }
    for (auto x : v) {
        s.erase(s.find(x.second));

        // here order_of_key returns the number of elements strictly less than x.first
        ans += s.order_of_key(x.second);
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