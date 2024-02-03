#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 
    int n;
    cin >> n;
    int curr = 0;

    int x;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
        sum = max (sum, 0LL);
    }

    cout << sum << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}