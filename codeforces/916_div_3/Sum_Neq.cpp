#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> v(n + 1);
    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    if (mp.size() == 1) {
        cout << "NO" << endl;
        return;
    }

    if (mp.size() >= 5) {
        cout << "YES" << endl;
        return;
    }

    
    if (n == 4) {
        int sum1 = v[1] + v[2];
        int sum2 = v[3] + v[4];

        cout << (sum1 == sum2 ? "NO" : "YES") << endl;
        return;
    }

    cout << "YES" << endl;
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