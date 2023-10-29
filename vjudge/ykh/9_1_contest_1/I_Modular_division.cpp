#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

ll mulmod(ll x, ll y, ll mod)
{ // O(log y)
    ll ans = 0;
    while (y > 0) {
        if (y & 1) {
            ans = (ans + x) % mod;
        }
        x = (x + x) % mod;
        y >>= 1;
    }
    return ans;
}

int power(int x, ll n, int mod)
{ // O(log n)
    int ans = 1 % mod;
    while (n > 0) {
        if (n & 1) {
            ans = 1LL * ans * x % mod;
        }
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}

// m is prime
int inverse(int a, int m)
{ // O(log m)6
    return power(a, m - 2, m);
}


void solve()
{
    int a , b , n ;
    cin >> a >> b >> n;

    int inv = inverse(b , n);

    cout << mulmod(a , inv , n) << endl;
   
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}