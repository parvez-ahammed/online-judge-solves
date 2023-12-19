#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, k;
    cin >> n >> k;

    if (k == 0) {
        for (int i = n ; i >= 1; i--) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    cout << 1 << " ";
    for (int i = n - k +1  ; i <= n; i++) {
        cout << i << " ";
    }

    for (int i = n - k ; i >= 2 ; i--) {
        cout << i << " ";
    }

    cout << endl;
    
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