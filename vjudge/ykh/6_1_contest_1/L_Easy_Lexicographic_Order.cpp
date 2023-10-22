#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 

    string s , t;
    cin >> s >> t;

    if (s < t) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}