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

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> v(n + 1, vector<ll>(1, 0));
    ll a;
    ll b;
    ll root_count = n - 1;

    set<pair<ll, ll>> s;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        ll s_size = s.size();

        s.insert(make_pair(max(a, b), min(a, b)));

        if (s_size + 1 == s.size())
            abs(a - b) == 1 ? root_count -= 1 : root_count = root_count;
    }

    // for (int i = 0; i < v.size() - 1; i++)
    // {
    //     if (count(v[i + 1].begin(), v[i + 1].end(), i) == 0)
    //         root_count += 1;
    // }

    cout << n + root_count << endl;
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