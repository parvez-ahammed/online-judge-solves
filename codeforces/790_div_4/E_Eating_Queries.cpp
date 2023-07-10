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
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1), pref(n + 2);

    ll maxV;
    rep(0, n) cin >> v[i];

    SortR(v);
    pref[0] = 0;

    for (int i = 0; i <= n; i++)
        pref[i + 1] = pref[i] + v[i];

    maxV = pref[n];

    while (q--)
    {
        int quantity;
        cin >> quantity;
        if (quantity > maxV)
        {
            cout << -1 << endl;
        }
        else
        {
            int pos = lower_bound(pref.begin(), pref.end(), quantity) - pref.begin();
            cout << pos << endl;
        }
    }
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