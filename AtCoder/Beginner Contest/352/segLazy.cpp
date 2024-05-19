#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 3e5 + 9;
int a[N];

struct ST {

#define DATA_TYPE long long //! change here
#define lc (n << 1)
#define rc ((n << 1) + 1)
#define mid ((b + e) >> 1)

    DATA_TYPE t[4 * N] , lazy[4 * N];
    ST()
    {
        memset(t, 0, sizeof t);
        memset(lazy, 0, sizeof lazy);
    }

    inline void push(int n  , int b , int e)
    {
        if (lazy[n] == 0) return;
        t[n] = t[n] + lazy[n] * (e - b + 1);
        if (b != e) {
            lazy[lc] = lazy[lc] + lazy[n];
            lazy[rc] = lazy[rc] + lazy[n];
        }
        lazy[n] = 0;
    }

    inline DATA_TYPE combine(DATA_TYPE a, DATA_TYPE b) { return a + b; } //! change here

    inline void pull(int n) { t[n] = t[lc] + t[rc]; } //! change here

    void build(int n, int b, int e)
    {
        lazy[n] = 0;
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
        push(n, b, e);
        if (b > i or e < i)
            return;
        if (b == e and b == i) {
            lazy[n] = x; //! update here
            push(n, b, e);
            return;
        }
        update(lc, b, mid, i, x);
        update(rc, mid + 1, e, i, x);
        pull(n);
    }

    DATA_TYPE query(int n, int b, int e, int i, int j)
    {
        push(n, b, e);
        if (b > j or e < i)
            return 0; //! change here
        if (b >= i and e <= j)
            return t[n];

        return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
    }
} t;
void solve() { }
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}