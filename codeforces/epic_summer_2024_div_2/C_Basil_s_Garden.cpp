#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> h(n);
    

    for (int i = 0; i < n; i++) {
        cin >> h[i];
        h[i] = h[i] + i;
    }
    int mx = *max_element(h.begin(), h.end());

    cout << mx << endl;
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