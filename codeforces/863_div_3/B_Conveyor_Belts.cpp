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

void solve()
{
    int n;
    cin >> n;

    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    x1--;
    y1--;
    x2--;
    y2--;

    if (x1 == x2 || (n + 1 - x1 == x2) || (x1 == y2 || (n + 1 - x1 == y2)))
    {
        cout << 0 << endl;
    }

    else
    {

        ll first = min(x1, min(n - 1 - x1, min(y1, n - 1 - y1)));
        ll second = min(x2, min(n - 1 - x2, min(y2, n - 1 - y2)));

        ll ans = abs(first - second);

        cout << ans << endl;
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