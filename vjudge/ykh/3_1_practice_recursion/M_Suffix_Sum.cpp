#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
vector<ll> V;
ll suffix(int m, int n)
{
    if (n == m)
        return 0;
    else
        return V[V.size() - 1 - n] + suffix(m, n + 1);
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<ll> v(n);
    rep(0, n) cin >> v[i];
    V = v;
    ll val = 0;
    cout << suffix(m, 0) << endl;
    return 0;
}