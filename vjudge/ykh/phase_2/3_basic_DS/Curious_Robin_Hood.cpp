#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int N = 1e5 + 5;

int a[N];
struct ST {

#define DATA_TYPE long long //! change here
#define lc (n << 1)
#define rc ((n << 1) + 1)
#define mid ((b + e) >> 1)

    DATA_TYPE t[4 * N];
    ST()
    {
        memset(t, 0, sizeof t);
    }

    inline DATA_TYPE combine(DATA_TYPE a, DATA_TYPE b) { return a + b; } //! change here

    inline void pull(int n) { t[n] = t[lc] + t[rc]; } //! change here

    void build(int n, int b, int e)
    {
        if (b == e) {
            t[n] = a[b];
            return;
        }
        build(lc, b, mid);
        build(rc, mid + 1, e);
        pull(n);
    }
    void update(int n, int b, int e, int i, int x)
    {
        if (b > i or e < i)
            return;
        if (b == e and b == i) {
            t[n] += x; //! update here
            return;
        }
        update(lc, b, mid, i, x);
        update(rc, mid + 1, e, i, x);
        pull(n);
    }

    DATA_TYPE query(int n, int b, int e, int i, int j)
    {
        if (b > j or e < i)
            return 0; //! change here
        if (b >= i and e <= j)
            return t[n];

        return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
    }
} t;
void solve()
{

    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    t.build(1, 1, n);
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int i;
            cin >> i;
            i++;
          
            int curr = t.query(1, 1, n, i, i);
            cout << curr << endl;
            t.update(1, 1, n, i, -1 * curr);

        } else if (type == 2) {
            int i, v;
            cin >> i >> v;
            i++;
            
            t.update(1, 1, n, i, v);
        } else {
            int i, j;
            cin >> i >> j;
            i++, j++;
            cout << t.query(1, 1, n, i, j) << endl;
        }
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Case " << t << ":" << endl;
        solve();
    }
    return 0;
}