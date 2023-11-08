#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 

    int a  , b; 
    cin >> a >> b;

   // a ^ c = b
   // a^a^c = a^b
    // 0^c = a^b
    // c = a^b


    cout << (a ^ b) << endl;
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