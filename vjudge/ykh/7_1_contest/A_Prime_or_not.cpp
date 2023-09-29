#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool isPrime(ll n)
{
    if (n == 1)
        return false;

    for (int i = 2; (i * 1ll * i) <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    isPrime(n) ? cout << "Yes" : cout << "No";
    cout << endl;

    return 0;
}