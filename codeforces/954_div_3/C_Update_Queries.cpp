#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    vector<int> ind(m);
    map<int, int> mp;
    for (int i = 0; i < m; i++) {
        cin >> ind[i];
        ind[i]--;
        mp[ind[i]]++;
    }

    string c;
    cin >> c;
    sort(c.begin(), c.end());
    for (auto x : mp) {
        s[x.first] = c.front();
        x.second--;
        c.erase(c.begin());

        while (x.second--) {
            c.pop_back();
        }
    }

    cout << s << endl;
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