#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<int> primes;
void sieve()
{
    const ll n = 1e6+5;
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2;  i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i + i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}
void solve()
{

    ll n;

    cin >> n;

    int NOD = 1;

    for (auto prime : primes) {
        if (prime * prime > n)
            break;
        int cnt = 0;
        while (n % prime == 0) {
            n /= prime;
            cnt++;
        }
        NOD *= (cnt + 1);
    }

    if (n > 1) {
        NOD *= 2;
    }

    cout << NOD - 1 << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}