#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
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

    int mon = 0;
    int ster = 0;

    for (int i = 0; i < n; i++) {
        int mono = a[i];

        int stero = (i + 1 < n) ? b[i + 1] : 0;

        if (mono > stero) {
            mon += mono;
            ster += stero;
        }
    }
    cout << mon - ster << endl;
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