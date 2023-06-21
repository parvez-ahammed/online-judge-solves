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
const int N = 2e5 + 9;
#define CLEAR(a, x) memset(a, x, sizeof(a));
vi adj[N];
ll cnt[N];
#define pb push_back

void dfs(int u, int p)
{
    if (adj[u].size() == 1 && u != 1)
    {
        cnt[u] = 1;
        return;
    }
    for (auto v : adj[u])
    {
        if (v != p)
        {
            dfs(v, u);
            cnt[u] += cnt[v];
        }
    }
}

void solve()
{
    int n, q;
    cin >> n;

    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    cin >> q;
    dfs(1, 0);

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        cout << 1LL * cnt[x] * cnt[y] << endl;
    }

    CLEAR(cnt, 0);
    for (int i = 0; i <= n; i++)
        adj[i].clear();
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