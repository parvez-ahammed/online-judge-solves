#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> a(n), b(n);

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {

        cin >> a[i];
        v[i].first = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        v[i].second = b[i];
    }
    sort (v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        a[i] = v[i].first;
        b[i] = v[i].second;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
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

// 2 3 4 6 5 1
// 1 2 4 3 5 6

// 1 2 3 4 5 6
// 6 1 2 4 5 3