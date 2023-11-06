#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

map<int, string> mp;

string generateString(int n)
{
    if (n == 1) {
        return mp[n] = "A";
    }

    if (mp.find(n) != mp.end()) {
        return mp[n];
    }

    string s = generateString(n - 1);

    string ans = s + (char)('A' + n - 1) + s;

    return mp[n] = ans;
}

void solve()
{

    int n;
    cin >> n;

    string ans = generateString(n);

    cout << ans;
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