#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<int> primes;

void sieve()
{
    int n = 10000000;
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (isPrime[i])
            primes.push_back(i);
    }
}
void solve()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << primes[i] << " ";
    }
    cout << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    //cout << primes.size() << endl;
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}