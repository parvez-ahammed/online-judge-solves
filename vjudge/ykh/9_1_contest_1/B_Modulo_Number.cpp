#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int mod = 998244353;
void solve() {

    ll n ; cin >> n ;

    
    // (n -x ) % m = 0 
    // =>  n % mod - x % mod = 0
    // =>  x % mod = n % mod
    // =>  x = n % mod --> as x < mod
    // =>  x = (n % mod + mod) % mod
    // so the last part is added in order to make sure that x is positive
    // added mod as adding mod to a number does not change its value in modulo arithmetic
   
    cout << (n %mod + mod) % mod << endl ; 
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}