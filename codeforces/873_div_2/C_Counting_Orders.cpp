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
#define rep(x, n) for (int i = x; i < n; i++)

void solve()
{

    int n;
    cin >> n;

    vll a(n + 1), b(n + 1);

    rep(1, n + 1) cin >> a[i];

    ll max_val = 0;
    rep(1, n + 1)
    {
        cin >> b[i];

        max_val = max(max_val, b[i]);
    }

    vll c;

    rep(1, a.size())
    {
        if (a[i] > max_val)
            c.push_back(a[i]);
    }

    Sort(a);
    Sort(b);

    long long ans = 1;
    for (int i = 0; i < n; i++)
    {
        int count = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
        ans = (ans * (count - i)) % BIG_MOD;
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

// 2 4 5 6 8 9
// 6 6 5 4 3 2 <-- boshte parbe = 6 *
// 1 1 3 4 5 6

// 2 3 4
// 1 0 0 <-- boshte parbe = 0
// 3 4 9

// 2
// 1 <-- boshte parbe = 1
// 1

// 2 3 4
// 3 1 1 <-- boshte parbe 0 karon  1 multiple so ekisathe ek number dui place not possible
// 1 3 3
