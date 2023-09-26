#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<ll> v;
void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;

    ll min_sum = v[k];

    ll max_sum = v[n] - v[n - k];

    if (x < min_sum or x > max_sum) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int MAX = 2e5 + 5;
    v.resize(MAX);

    v[1] = 1;
    for (int i = 2; i < MAX; i++) {
        v[i] = v[i - 1] + i;
    }

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}