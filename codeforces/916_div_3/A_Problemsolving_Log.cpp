#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    string str;

    int n;
    cin >> n;
    cin >> str;

    sort(str.begin(), str.end());

    map<char, int> mp;

    for (int i = 0; i < str.size(); i++) {
        mp[str[i]]++;
    }

    int cnt = 0;

    for (auto [ch, occ] : mp) {

        cnt += (occ >= (ch - 'A' + 1));
    }
    cout << cnt << endl;
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