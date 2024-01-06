#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

// A , B array Given have to construct C array
// Ci = Ai + Bi
// possible to make each element equal
// if yes then print YES
void solve()
{

    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++) {
        cin >> b[j];
    }

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    for (int i = 0; i < n; i++) {
        if (a[i] + b[i] != a[0] + b[0]) {
            cout << -1 << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int j = 0; j < n; j++) {
        cout << b[j] << " ";
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