#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 

    int n , k ;
    cin >> n >> k ;

    vector<int> a(n) ;

    for(int i = 0 ; i < n ; i++) {
        cin >> a[i] ;
    }

    sort(a.begin() , a.end()) ;

    

    int check = a.front() ;
    int ans = 1 ;

    for (int i = 1 ; i < n ; i++)
    {
        if (a[i] - check >= k)
        {
            ans++ ;
            check = a[i] ;
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