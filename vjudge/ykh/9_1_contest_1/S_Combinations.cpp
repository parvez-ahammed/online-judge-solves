#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int mod = 1000003;
const int N = 1e6 + 2;
int fact[N], ifact[N];

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
void prec()
{ // O(n)
    fact[0] = 1;
    for (int i = 1; i < N; i++) {
        fact[i] = 1LL * fact[i - 1] * i % mod;
    }
    ifact[N - 1] = inverse(fact[N - 1], mod);
    for (int i = N - 2; i >= 0; i--) {
        ifact[i] = 1LL * ifact[i + 1] * (i + 1) % mod; // 1 / i! = (1 / (i + 1)!) * (i + 1)
    }
}

int nCr(int n, int r)
{ // O(1)
    if (n < r)
        return 0;
    return 1LL * fact[n] * ifact[r] % mod * ifact[n - r] % mod;
}

void solve()
{

    int n, k;

    cin >> n >> k;

    cout << nCr(n, k) << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    prec();
    int tc = 1;
    cin >> tc;

    for (int t = 1; t <= tc; t++) {
        cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}