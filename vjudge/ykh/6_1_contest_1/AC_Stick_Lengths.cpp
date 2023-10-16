#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 

    int n ;
    cin >> n ;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++) cin >> v[i];

    sort(v.begin() , v.end());

    int mid = v[n/2];

    ll ans = 0 ;

    for(int i = 0 ; i < n ; i++) {
        ans += abs(v[i] - mid);
    }

    cout << ans << endl;
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