#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> freq(200, 0);
    int x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        freq[x]++;
    }

    for (int i = 0; i < 200; i++) {
        while (freq[i]--) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}