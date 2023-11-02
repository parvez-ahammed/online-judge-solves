#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int lastMod = 1000;
ll power(int x, ll n, ll mod)
{
    ll ans = 1 % mod;
    while (n > 0) {
        if (n & 1) {
            ans = 1LL * ans * x % mod;
        }
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}

int firstThree(int n, int k)
{

    // x = n ^k
    // log10(x) = k log10(n)

    // x = 10^(k log10(n))
    // x = 10 ^ (k log10(n) - floor(k log10(n))) . 10 ^ floor(k log10(n))
    // we will find out 10 ^ (k log10(n) - floor(k log10(n)))

    double x = k * log10(n);

    double ans = pow(10, x - floor(x));

    while (ans < 100)
        ans *= 10;

    return ans;
}

string lastThree(int n, int k)

{

    int x = power(n, k, lastMod);
    string s = to_string(x);

    // modding by 1000 will return  less 0 when the last numbers are 0000 , so have to add padding

    while (s.size() < 3)
        s = '0' + s;

    return s;
}
void solve()
{

    int n, k;
    cin >> n >> k;

    cout << firstThree(n, k) << "..." << lastThree(n, k) << endl;
}

void print(ll n)
{
    // print first 3 digit

    if (to_string(n).size() > 3)
        cout << to_string(n).substr(0, 3);
    else
        cout << n;
    cout << endl;
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