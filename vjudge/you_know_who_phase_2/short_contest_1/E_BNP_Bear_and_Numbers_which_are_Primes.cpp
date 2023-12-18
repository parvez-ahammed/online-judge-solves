#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<int> primes;

const int MAXN = 10000005;
void sieve()
{
    int n = MAXN;
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

void getPrimeFactors(int n, vector<int>& existingPrime)
{
    int i = 0;
    while (primes[i] * primes[i] <= n) {
        if (n % primes[i] == 0) {
            existingPrime[primes[i]]++;
            while (n % primes[i] == 0) {
                n /= primes[i];
            }
        }
        i++;
    }
    if (n > 1)
        existingPrime[n]++;
}
void solve()
{

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> existingPrime(MAXN, 0);

    for (int i = 0; i < n; i++) {
        getPrimeFactors(v[i], existingPrime);
    }

    vector<ll> prefixSum(MAXN, 0);

    for (int i = 1; i < MAXN; i++) {
        prefixSum[i] = prefixSum[i - 1] + existingPrime[i];
    }

    int m;
    cin >> m;

    while (m--) {
        int l, r;
        cin >> l >> r;

        if (l > 10000000) {
            cout << 0 << endl;
            continue;
        }

        r = min(r, 10000000);

        cout << prefixSum[r] - prefixSum[l - 1] << endl;

        
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}