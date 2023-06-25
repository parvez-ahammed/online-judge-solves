#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};
#define BIG_MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{

    ll n;
    cin >> n;
    vll a(n), b(n), pa(n), pb(n);
    rep(0, n) cin >> a[i];
    rep(0, n) cin >> b[i];

    ll sum = -1;
    
    ll curr = 0;

    pa[n - 1] = a[n - 1];
    pb[n - 1] = b[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        pa[i] = a[i] + pa[i + 1];
        pb[i] = b[i] + pb[i + 1];
    }

    rep(0, n)
    {

        curr += a[i];
        ll op1 = b[n - 1] + curr + ((i + 1 < n) ? pa[i + 1] : 0);
        ll op2 = curr + pb[i];

        sum = max(sum, max(op1, op2));
    }

    cout << sum << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}