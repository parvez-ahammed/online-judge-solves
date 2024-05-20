#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())

const int N = 1e5 + 5;
pair<int, int> a[N];

struct ST {

#define DATA_TYPE long long //! change here
#define lc (n << 1)
#define rc ((n << 1) + 1)
#define mid ((b + e) >> 1)

    pair<int, int> t[4 * N];
    ST()
    {
        memset(t, 0, sizeof t);
    }

    inline DATA_TYPE combine(DATA_TYPE a, DATA_TYPE b)
    {
        return max(a, b);
    } //! change here

    inline void pull(int n)
    {
        if (t[lc].first == t[rc].first) {
            t[n] = { t[lc].first, t[lc].second + t[rc].second };
        } else {
            if (t[rc].second > t[lc].second)
                t[n] = t[rc];
            else
                t[n] = t[lc]; 
        }
    } //! change here

    void build(int n, int b, int e)
    {
        if (b == e) {
            t[n] = { a[b].first, 1 };
            return;
        }
        build(lc, b, mid);
        build(rc, mid + 1, e);
        pull(n);
    }

    DATA_TYPE query(int n, int b, int e, int i, int j)
    {
        if (b > j or e < i)
            return INT_MIN; //! change here
        if (b >= i and e <= j)
            return t[n].second;

        return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
    }
} t;
void solve()
{

    int n, c, q;
    cin >> n >> c >> q;

    for (int i = 1; i <= n; i++) {
        cin >> a[i].first;
        a[i].second = 1;
    }

    t.build(1, 1, n);

    while (q--) {
        int i, j;
        cin >> i >> j;
        cout << t.query(1, 1, n, i, j) << endl;
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--) {
        cout << "Case " << i++ << ": " << endl;
        solve();
    }
    return 0;
}