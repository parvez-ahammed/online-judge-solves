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
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int l;
    cin >> l;
    vector<int> c(l);
    for (int i = 0; i < l; i++) {
        cin >> c[i];
    }

    int q;
    cin >> q;
    vector<int> x(q);
    for (int i = 0; i < q; i++) {
        cin >> x[i];
    }

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < l; k++) {
                mp[a[i] + b[j] + c[k]]++;
            }
        }
    }

    for (int i = 0; i < q; i++) {
        if (mp.find(x[i]) != mp.end()) {
            cout << "Yes" << endl;

        } else {
            cout << "No" << endl;
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