#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

vector<vector<ll>> swap_cols(vector<vector<ll>> vv, ll x, ll y)
{

    for (int i = 0; i < vv.size(); i++)
        swap(vv[i][x - 1], vv[i][y - 1]);
    return vv;
}

void solve()
{

    ll n, x, y;

    cin >> n >> x >> y;

    vector<vector<ll>> vv(n, vector<ll>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vv[i][j];
        }
    }

    swap(vv[x - 1], vv[y - 1]);

    vv = swap_cols(vv, x, y);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << vv[i][j] << " ";
        cout << "\n";
    }
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