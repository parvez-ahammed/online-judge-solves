#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    string s;

    vector<int> small, capital;

    map<int, char> mp;

    cin >> s;
    for (int i = 0; i < s.size(); i++) {

        mp[i] = s[i];

    
        if (s[i] == 'B') {
            mp[i] = '-';
            if (capital.size() > 0) {
                mp[capital.back()] = '-';
                capital.pop_back();
            }
        } else if (s[i] == 'b') {
            mp[i] = '-';
            if (small.size() > 0) {
                mp[small.back()] = '-';
                small.pop_back();
            }
        } else {
            if (isupper(s[i]))
                capital.push_back(i);
            else
                small.push_back(i);
        }
    }

    for (auto i : mp)
        if (i.second != '-')
            cout << i.second;

    cout << endl;
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