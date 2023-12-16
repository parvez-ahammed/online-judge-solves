#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    string s;
    ll b;
    cin >> s >> b;

    b = abs(b);
    if (s[0] == '-')
        s.erase(s.begin());
    ll rem = 0;
    for (int i = 0; i < s.size(); i++)
        rem = stoll(to_string(rem) + s[i]) % b;

    cout << (rem == 0 ? "divisible" : "not divisible") << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--) {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}