#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() {

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    vector<string> ans;

    do {
        ans.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << ans.size() << endl;
    for (string x : ans) {
        cout << x << endl;
    }
    
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