#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);

    set<int> s;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int cnt = 0;

    multiset<int> ms;

    for (int i= 0 ; i < n; i++) {
        auto it = ms.upper_bound(v[i]);
        if (it == ms.end()) {
            cnt++;
            ms.insert(v[i]);
        } else {
            ms.erase(it);
            ms.insert(v[i]);
        }
    }
    cout << cnt << endl;


}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}