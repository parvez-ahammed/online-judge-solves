#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 1e8;

vector<bool> is_prime(N, true);
void sieve()
{
    is_prime[1] = false;

    for (int i = 2; i * i < N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}
void solve()
{

    sieve();
    vector<int> primes;
    for (int i = 2; i < N; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    for (int i = 0; i < primes.size(); i += 100) {
        cout << primes[i] << endl;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}