#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

long double euclideanDistance(ll x1, ll y1, ll x2, ll y2)
{
    ll dx = x1 - x2;
    ll dy = y1 - y2;
    return sqrtl(dx * dx + dy * dy);
}
void solve()
{

    int n;
    cin >> n;
    vector<pair<int, int>> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i].first >> c[i].second;
    }
    int xs, ys, xt, yt;
    cin >> xs >> ys >> xt >> yt;

    bool possible = true;

    long double dist = euclideanDistance(xs, ys, xt, yt);

    if (dist == 0) {
        possible = true;
    } else {
        vector<long double> circDis(n);
        long double minDis = INT_MAX;

        for (int i = 0; i < n; i++) {
            long double val = euclideanDistance(xt, yt, c[i].first, c[i].second);
            minDis = min(minDis, val);
        }

        if (dist < minDis) {
            possible = true;
        } else {
            possible = false;
        }
    }

    cout << (possible ? "YES" : "NO") << endl;
}
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