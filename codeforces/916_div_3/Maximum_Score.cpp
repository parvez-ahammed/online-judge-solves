#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 

    int n;
    cin >> n;

    vector<int> v(n + 1);

    int cnt_0 = 0, cnt_1 = 0;

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        cnt_0 += (v[i] == 0);
        cnt_1 += (v[i] == 1);
    }

    cout << min (cnt_0 , cnt_1) << endl;
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