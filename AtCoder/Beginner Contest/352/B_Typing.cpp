#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    string s;
    string t;
    cin >> s >> t;

    s.insert(s.begin(), '#');
    t.insert(t.begin(), '#');

    int j = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == t[j]) {
            cout << j << " ";
            j++;

        } else {

            while (s[i] != t[j] and j < t.size()) {
                j++;
            }
            cout << j << " ";
            j++;
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