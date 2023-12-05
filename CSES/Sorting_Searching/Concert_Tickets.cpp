#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() {


    int n , m ;
    cin >> n >> m ;
    multiset <int> s ;
    for(int i = 0 ; i < n ; i++ ) {
        int x ;
        cin >> x ;
        s.insert(x) ;
    }
    for(int i = 0 ; i < m ; i++ ) {
        int x ;
        cin >> x ;
        auto it = s.upper_bound(x) ;
        if(it == s.begin()) {
            cout << -1 << endl ;
        }
        else {
            it-- ;
            cout << *it << endl ;
            s.erase(s.find(*it)) ;
        }
    }
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