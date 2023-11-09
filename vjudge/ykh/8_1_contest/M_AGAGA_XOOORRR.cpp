#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    

    for (int i = 0; i < n; i++) {

        int ans = 0;
        int cnt = 0;
        for (int j = 0; j < n; j++) {

            if (v[j] != v[i])
                ans ^= v[j];

            cnt += (v[j] == v[i]);
        }

        if (ans == v[i] or cnt == n) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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