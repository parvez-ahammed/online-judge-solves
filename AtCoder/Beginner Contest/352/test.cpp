#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n, k;
    cin >> n >> k;
    string withoutAustLines = "";
    for (int i = 0; i < (2 * k) + 4; i++) {
        withoutAustLines += "*";
    }
    string withAustLines = "";

    for (int i = 0; i < k; i++) {
        withAustLines += "*";
    }
    withAustLines += "AUST";
    for (int i = 0; i < k; i++) {
        withAustLines += "*";
    }

    for (int i = 0; i < k; i++) {
        cout << withoutAustLines << endl;
    }
    for (int i = 0; i < n; i++) {
        cout << withAustLines << endl;
    }
    for (int i = 0; i < k; i++) {
        cout << withoutAustLines << endl;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}