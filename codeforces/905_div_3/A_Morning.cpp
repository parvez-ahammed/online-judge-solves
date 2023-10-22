#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() {

    string s;
    string t = "1234567890";

    map <char, int> mp;

    for (int i = 0; i < t.size(); i++) {
        mp[t[i]] = i+1;
    }

    cin >> s;

    int cnt = 0;

    char prev = '1';

    for (int i = 0 ; i < 4 ; i++)
    {
        cnt += abs(mp[s[i]] - mp[prev] ) +1;
        prev = s[i];
    }

    cout << cnt << endl;

}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}