#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())

const int N = 5e4 + 5;

struct ST {

#define DATA_TYPE int //! change here
#define lc (n << 1)
#define rc ((n << 1) + 1)
#define mid ((b + e) >> 1)

    DATA_TYPE t[3 * 4 * N];
    ST()
    {
        memset(t, 0, sizeof t);
    }

    inline DATA_TYPE combine(DATA_TYPE a, DATA_TYPE b) { return a + b; } //! change here

    inline void pull(int n) { t[n] = t[lc] + t[rc]; } //! change here

    void build(int n, int b, int e)
    {
        if (b == e) {
            t[n] = 0;
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

    vector<pair<int, int>> v(n);
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        s.insert(v[i].first);
        s.insert(v[i].second);
    }

    vector<int> Q(q);
    for (int i = 0; i < q; i++) {
        cin >> Q[i];
        s.insert(Q[i]);
    }

    map<int, int> mp;
    int index = 1;

    for (auto x : s) {
        mp[x] = index++;
    }
    vector<int> occ(index + 5, 0);
    for (int i = 0; i < n; i++) {
        v[i].first = mp[v[i].first];
        v[i].second = mp[v[i].second];
    }

    for (int i = 0; i < q; i++) {
        Q[i] = mp[Q[i]];
    }

    t.build(1, 1, index);

    for (int i = 0; i < n; i++) {
        t.update(1, 1, index, v[i].first, 1);

        if (v[i].second + 1 <= index)
            t.update(1, 1, index, v[i].second + 1, -1);
    }

    for (int i = 0; i < q; i++) {
        cout << t.query(1, 1, index, 1, Q[i]) << endl;
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