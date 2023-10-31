#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
// len can be 10 ^ (100000)
void solve() { 

    string s;
    cin >> s;
    // n + 2^n + 3^n + 4^n 
    // n + 2^n(1+ 2^n) + 3^n
    // divisible only if last digit is 0 or 5
    // which powers of 3 are divisible by 5?
    //     
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