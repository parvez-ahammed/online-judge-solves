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
    ll n, b;
    cin >> b >> n;
    vi v(n);
    ll sum = 0;
    rep(0, n) cin >> v[i], sum += v[i];

    Sort(v);
    int left_to_fill = b;

    for (int i = 0; i < n; i++)
    {

        if (left_to_fill >= v[i])
        {
            left_to_fill -= v[i];
        }
        else if (left_to_fill == 0)
        {
            left_to_fill = b;
        }
        else if (left_to_fill < v[i])
        {
            v[i] -= left_to_fill;
            left_to_fill = b;
            left_to_fill -= v[i];
        }
    }

    cout << b - left_to_fill << endl;
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