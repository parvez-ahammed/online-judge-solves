#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

ll processType1(int x, vector<vector<ll>>& prefixSum)
{
    ll ans = 0;
    for (int i = 1; i <= x; i++) {
        ans += prefixSum[i].back();
    }
    return ans;
}

ll processType2(int x, int y, vector<vector<ll>>& prefixSum)
{
    ll ans = 0;
    for (int i = 1; i <= x; i++) {

        if (y <= prefixSum[i].size() - 1) {
            ans += prefixSum[i][y];
        } else {
            ans += prefixSum[i].back();
        }
    }
    return ans;
}
void solve()
{

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<vector<int>> store(13);

    for (int i = 1; i <= 12; i++) {
        store[i].push_back(0);
    }

    for (int i = 0; i < n; i++) {
        store[b[i]].push_back(a[i]);
    }

    vector<vector<ll>> prefixSum(13);

    for (int i = 1; i <= 12; i++) {
        prefixSum[i].push_back(0);
        sort(store[i].begin() + 1, store[i].end(), greater<int>());
        for (int j = 1; j < store[i].size(); j++) {
            prefixSum[i].push_back(prefixSum[i][j - 1] + store[i][j]);
        }
    }

    int q;
    cin >> q;

    while (q--) {

        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;
            cout << processType1(x, prefixSum) << endl;

            
        } else {
            int x, y;
            cin >> x >> y;
            cout << processType2(x, y, prefixSum) << endl;
        }
    }
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