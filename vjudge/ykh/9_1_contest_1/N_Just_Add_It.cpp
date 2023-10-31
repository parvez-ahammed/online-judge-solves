#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int mod = 10000007;
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

// 1 2 3 4 5
// 1 2 3 4 
// 1 2 3
// 1 2 3

// So ultimately the three terms are
// 4 5
// 4

// n-1 comes twice
// n comes once

void solve(int n, int k)
{

  

    int ans = (power(n, n, mod) + power(n, k, mod)) % mod;
    ans += (2 * (power(n - 1, n - 1, mod) + power(n - 1, k, mod))) % mod;
    ans %= mod;

    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    int n, k;
    while (cin >> n >> k) {

        if (n == 0 && k == 0) {
            break;
        }
        solve(n, k);
    }
    return 0;
}