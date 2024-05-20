#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 

    int n ;
    cin >> n;
    string s;
    cin >> s;

    set<char> st;
    for (int i = 0; i < n; i++) {
        st.insert(s[i]);
    }

    string r ="";
    for (auto x : st) {
        r += x;
    }

    map<char , char> mp;

  
    for (int i = 0 ; i <= r.size() / 2; i++) {

    
        mp[r[i]] = r[r.size() - i - 1];
        mp[r[r.size() - i - 1]] = r[i];
    }

    string ans = "";

    for (int i = 0; i < n; i++) {
        ans += mp[s[i]];
    }

    cout << ans << endl;
    

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