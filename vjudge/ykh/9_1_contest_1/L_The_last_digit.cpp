#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


int power(int x, int n, int mod)
{ // O(log n)
    int ans = 1 % mod;
    while (n > 0) {
        if (n & 1) {
            ans = 1LL * ans * x % mod;
        }
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}
void solve() {

    int a , b;
    cin >> a >> b;

    cout << power(a, b, 10) << endl;

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