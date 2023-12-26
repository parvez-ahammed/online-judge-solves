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

    s = " " + s;
    int q;
    cin >> q;

    vector < set<int> > idx(27);

    for (int i = 1; i <= n; i++) {
        int c = s[i] - 'a' + 1;
        idx[c].insert(i);
    }

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int pos;
            char c;
            cin >> pos >> c;

            int newChar = c - 'a' + 1;
            int oldChar = s[pos] - 'a' + 1;

            s[pos] = c;

            if (newChar == oldChar) {
                continue;
            }

            idx[oldChar].erase(pos);
            idx[newChar].insert(pos);

        } else {
            int l, r;
            cin >> l >> r;
            int ans = 0;

            for (int c = 1; c <= 26; c++) {
                auto it = idx[c].lower_bound(l);

                if (it == idx[c].end()) {
                    continue;
                }
                int pos = *it;

                if (pos <= r) {
                    ans++;
                }
            }

            cout << ans << endl;
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