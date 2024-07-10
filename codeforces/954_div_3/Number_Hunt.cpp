#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{

    int x;
    cin >> x;

    ll factor1 = x;

    while (true) {
        if (isPrime(factor1)) {
            ll factor2 = factor1 + 1;
            while (true) {
                if (isPrime(factor2)) {
                    cout << factor1 * factor2 << endl;
                    return;
                }
                factor2++;
            }
        }
        factor1++;
    }
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