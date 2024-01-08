#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n;
    cin >> n;

    vector<int> a(n + 1);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> v;

    int mn = a[0];
    int cnt = 1;
    for (int i = 1; i < n; i++) {

        if (a[i] > mn) {
            v.push_back(cnt);
            cnt = 1;
            mn = a[i];

        } else {
            cnt++;
        }

        mn = min(mn, a[i]);
    }

    v.push_back(cnt);

   for (int i = 0; i < v.size(); i++) {
        if (v[i] == 1)
        {
            cout << "NO" << endl;
            return;
        }
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