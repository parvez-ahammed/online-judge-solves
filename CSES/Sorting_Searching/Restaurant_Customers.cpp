#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() {


    int n ;
    cin >> n;

    vector <pair<int , int>> v ;

    for(int i = 0 ; i < n ; i++ ) {
        int x , y ;
        cin >> x >> y ;
        v.push_back({x , 1}) ;
        v.push_back({y , -1}) ;
    }
    sort(v.begin() , v.end()) ;

    int ans = 0 , curr = 0 ;

    for(int i = 0 ; i < v.size() ; i++ ) {
        curr += v[i].second ;
        ans = max(ans , curr) ;
    }

    cout << ans << endl ;
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