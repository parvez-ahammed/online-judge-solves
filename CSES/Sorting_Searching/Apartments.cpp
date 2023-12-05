#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() {


    int n , m , k ;
    cin >> n >> m >> k ;
    vector <int> a(n) , b(m) ;
    for(int i = 0 ; i < n ; i++ ) {
        cin >> a[i] ;
    }
    for(int i = 0 ; i < m ; i++ ) {
        cin >> b[i] ;
    }
    sort(a.begin() , a.end()) ;
    sort(b.begin() , b.end()) ;
    int i = 0 , j = 0 , ans = 0 ;


    while(i < n && j < m ) {
        if(abs(a[i] - b[j]) <= k ) {
            ans++ ;
            i++ ;
            j++ ;
        }
        else if(a[i] < b[j]) {
            i++ ;
        }
        else {
            j++ ;
        }
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