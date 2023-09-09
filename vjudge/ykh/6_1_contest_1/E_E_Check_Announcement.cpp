#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int m;
    cin >> m;

    vector<ll> v;

    v.push_back(1);
    v.push_back(1);

    int n = v.size();

    int i = 1;

    while (v.back() < m) {

        if (v[i] + v[i - 1] > m)
            break;
        v.push_back(v[i] + v[i - 1]);
        i++;
    }

    n = v.size();

    cout << n << endl;

    for (int i = 1; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << v[n - 2] << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }
    return 0;
}