#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    string str;
    cin >> str;

    bool ok = true;
    for (int i = 0; i < str.size(); i++) {
        if (i % 2 == 0) {
            if (isupper(str[i])) {
                ok = false;
                break;
            }
        } else {
            if (islower(str[i])) {
                ok = false;
                break;
            }
        }
    }

    cout << (ok ? "Yes" : "No") << endl;
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