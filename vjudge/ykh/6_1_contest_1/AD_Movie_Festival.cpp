#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 

    int n;

    cin >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].second >> v[i].first;
    }

    sort(v.begin(), v.end());

    int cnt = 0;
    int last = 0;

    for (int i = 0; i < n; i++) {
        if (v[i].second >= last) {
            cnt++;
            last = v[i].first;
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