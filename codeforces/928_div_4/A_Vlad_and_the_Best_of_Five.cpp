#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    string s;
    cin >> s;

    int cntA = 0, cntB = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') {
            cntA++;
        } else {
            cntB++;
        }
    }

    if (cntA > cntB) {
        cout << "A" << endl;
    } else
        cout << "B" << endl;
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