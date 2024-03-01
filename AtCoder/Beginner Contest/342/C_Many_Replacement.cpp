#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n;
    string str;
    cin >> n >> str;
    int q;
    cin >> q;

    map<char, char> m;
    
    for (char i = 'a'; i <= 'z'; i++) {
        m[i] = i;
    }

    while (q--) {
        char c, d;
        cin >> c >> d;

        for (auto i : m) {

            if (i.second == c) {
                m[i.first] = d;
            }
        }
    }

    for (int i = 0; i < str.size(); i++) {

        cout << m[str[i]];
    }
    cout << endl;
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