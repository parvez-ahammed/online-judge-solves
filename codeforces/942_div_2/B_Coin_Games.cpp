#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    string s;
    cin >> s;

    int totalUp = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'U') {
            totalUp++;
        }
    }

    cout << (totalUp % 2 == 1 ?  "YES" : "NO") << endl;
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

// U