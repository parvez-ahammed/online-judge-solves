

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b = a;
    sort(b.begin(), b.end());
    if (a == b) {
        cout << "YES" << endl;
        return;
    }
    vector<int> v;
    int maxi = a[0];
    int inc = 0;
    for (int i = 1; i < n; i++) {
        maxi = max(a[i], maxi);
        if (a[i] < maxi) {
            v.push_back(i);
            inc = max(inc, maxi - a[i]);
        }
    }

    int f = 1;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1] + 1) {
            f = 0;
        }
    }
    for (auto it : v) {
        a[it] = a[it] + inc;
    }
    b = a;
    sort(b.begin(), b.end());
    if (a == b and f == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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