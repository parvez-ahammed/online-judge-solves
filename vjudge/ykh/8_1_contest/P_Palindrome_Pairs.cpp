#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<vector<int>> v(n);

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int mask = 0;
        for (int j = 0; j < s.size(); j++) {

            int k = s[j] - 'a';

            mask = mask ^ (1 << k);
        }

        //cout << bitset<26>(mask) << endl;
        mp[mask]++;

        v[i].push_back(mask);
        //cout << "ONE BIT DIFFERENT" << endl;

        for (int k = 0; k < 26; k++) {
            //cout << bitset<26>(mask ^ (1 << k)) << endl;
            v[i].push_back((mask ^ (1 << k)));
        }

        //cout << v[i].size() << endl;
    }

    ll cnt = 0;

    for (int i = 0; i < n; i++) {

        // have to decrease this time
        mp[v[i][0]]--;
        for (int j = 0; j < 27; j++) {
            cnt += mp[v[i][j]];
        }
    }

    cout << cnt << endl;
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