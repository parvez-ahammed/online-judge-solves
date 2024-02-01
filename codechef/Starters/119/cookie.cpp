#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() {

    int n , k ;
    cin >> n >> k ;

    vector<int> a(n) ;

    for(int i = 0 ; i < n ; i++) cin >> a[i] ;



    int mn = INT_MAX;

    for (int i = 0 ; i < n ; i++)
    {
        if (a[i] >= k)
        {
            mn = min(mn , a[i] %k) ;
        }
    }

    if (mn == INT_MAX) mn = -1 ;

    cout << mn << endl ;

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