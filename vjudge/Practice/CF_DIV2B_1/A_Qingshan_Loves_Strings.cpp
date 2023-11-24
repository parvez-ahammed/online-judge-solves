#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool isGood(string s)
{
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1])
            return false;
    }

    return true;
}
void solve()
{

    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    bool possible = isGood(s);
    string temp = "";

    if (!possible) {

        temp += s[0];

        for (int i = 1; i < n; i++) {

            if (temp.back() == s[i]) {
                temp += t;
            }
            temp += s[i];
            //cout << temp << endl;
        }
        
        possible = isGood(temp);
    }

    cout << (possible ? "Yes" : "No") << endl;
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