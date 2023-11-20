#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    int x = 0;
    for (int i = 1; i <= n - 3; i++) {
        cout << i << " ";
        // cout << bitset<32>(i) << endl;
        x ^= i;
    }

    // cout << bitset<32>(1 << 29) << endl;
    // cout << bitset<32>(1 << 30) << endl;
    // cout << bitset<32>(x ^ (1 << 29) ^ (1 << 30)) << endl;

    cout << (1 << 29) << " " << (1 << 30) << " " << (x ^ (1 << 29) ^ (1 << 30)) << endl;
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