#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    string order, a, b;

    cin >> order >> a >> b;

    map<char, int> mp;

    for (int i = 0; i < order.size(); i++) {
        mp[order[i]] = i;
    }

    bool aIsGreater = true;

    int minLen = min(a.size(), b.size());

    for (int i = 0; i < minLen; i++) {

        if (a[i] == b[i]) {
            continue;
        }
        if (mp[a[i]] < mp[b[i]]) {
            aIsGreater = false;
            break;
        }

        break;
    }

    if (a == b) {
        cout << "=" << endl;
    } else if (aIsGreater) {
        cout << ">" << endl;
    } else {
        cout << "<" << endl;
    }
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