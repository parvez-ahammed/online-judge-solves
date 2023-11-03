#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 1e6 + 2, mod = 1e9 + 7;

int fact[N], ifact[N];

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

bool excellentNumber(int sum, int a, int b)
{

    while (sum) {
        if (sum % 10 != a and sum % 10 != b)
            return false;
        sum /= 10;
    }
    return true;
}

int numberOfPossibleWays(int n, int firstOcc, int secondOcc)
{
    return 1ll * fact[n] * ifact[firstOcc] % mod * ifact[secondOcc] % mod;
}

void generateCustomBitset(int a, int b, int n)
{
}
void solve()
{

    int a, b, n;
    cin >> a >> b >> n;

    int ans = 0;
    for (int i = 0; i <= n; i++) {
        int firstOcc = n - i;
        int secondOcc = i;

        int sum = (a * firstOcc) + (b * secondOcc);

        if (excellentNumber(sum, a, b)) {

            ans = (1LL * ans + numberOfPossibleWays(n, firstOcc, secondOcc)) % mod;
        }
    }

    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    prec();
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}