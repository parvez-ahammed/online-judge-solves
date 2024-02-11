#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    vector<int> v;
    for (auto x : s) {
        v.push_back(x);
    }

    int cnt2 = 1;

    for (int i = 0; i < v.size(); i++) {
        int right = v[i] + n - 1;
        int r = upper_bound(v.begin(), v.end(), right) - v.begin();
        cnt2 = max(cnt2, r - i);
    }

    cout << cnt2 << endl;
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