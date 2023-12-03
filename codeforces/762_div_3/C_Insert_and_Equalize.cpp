#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> v(n);

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    bool allNumberSame = true;

    for (int i = 1; i < n; i++) {
        if (v[i] != v[i - 1]) {
            allNumberSame = false;
            break;
        }
    }

    if (n == 1 or allNumberSame) {
        cout << 1 << endl;
        return;
    }

    sort(v.begin(), v.end());

    int mx = v[n - 1];
    int gcd = mx - v[0];
    for (int i = 1; i < n; i++) {
        gcd = __gcd(gcd, mx - v[i]);
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int diff = mx - v[i];
        if (diff)
            cnt += diff / gcd;
    }

    int nextNum = INT_MAX;

    for (int i = mx; i >= -1e9 - 5; i -= gcd) {

        if (mp[i] == 0) {
            nextNum = i;
            break;
        }
    }

    int add = 0;
    int bigNumCost = n;
    if (nextNum == INT_MAX)
        add = bigNumCost;
    else {

        int smallNumCost = (mx - nextNum) / gcd;

        add = smallNumCost;
        if (cnt != 0)
            add = min(smallNumCost, bigNumCost);
    }

    cout << cnt + add << endl;
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