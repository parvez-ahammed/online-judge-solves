#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    string str;
    cin >> str;
    int cnt = 0;
    map<char, int> mp;

    int n = str.size();

    for (int i = 0; i < n; i++) {

        mp[str[i]]++;

        if (mp[str[i]] == 2) {
            mp.clear();

            cnt -= 2;
        }

        cnt++;
    }

    cout << cnt << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}