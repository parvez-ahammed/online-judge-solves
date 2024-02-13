#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    string s = "";

    if (n - 26 > 2) {
        s += 'z';
        n -= 26;
    } else {
        s += 'a';
        n--;
    }

    if (n - 26 > 1) {
        s += 'z';
        n -= 26;
    } else {
        s += 'a';
        n--;
    }

    s += (char)('a' + n - 1);

    sort (s.begin(), s.end());

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