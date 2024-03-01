#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    string s;
    cin >> s;

    map<char, vector<int>> mp;

    for (int i = 0; i < s.size(); i++) {
        mp[s[i]].push_back(i + 1);
    }

    for (auto i : mp) {
        if (i.second.size() == 1) {
            cout << i.second[0] << " ";
            return;
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