#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;

    cin >> n;

    vector<int> a(n + 1);

    map<int, int> mp;

    ll totSum = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        totSum += a[i];
    }

    map<int, ll> maxSum;

    ll tempSum = 0;

    for (auto [elem, occ] : mp) {
        ll currSum = 1LL * elem * occ;
        tempSum += currSum;

        maxSum[elem] = totSum - tempSum;
    }

    for (int i = 1; i <= n; i++) {
        cout << maxSum[a[i]] << " ";
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