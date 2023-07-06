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

#define leftShift(p) (p << 1)
#define rightShift(p) (p >> 1)
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define ToggleBit(x, k) (x ^= (1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)

void solve()
{
    int n;
    cin >> n;
    vi v(n + 1);

    cin >> v[1];
    int all_xor = v[1];
    int ans = v[1];
    rep(2, n+1)
    {
        cin >> v[i]; all_xor ^= v[i];
        ans = max(ans, v[i]);
    }

    rep(1 , n+1)
    {
        int res = v[i];
        for (int j = i+1 ; j <= min(n ,(i+256)) ;j++)
        {
            res ^= v[j];
            ans = max (ans , res);
        }
    }
    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}