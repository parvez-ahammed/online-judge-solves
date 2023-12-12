#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 20000000 + 9;

vector<bool> is_prime(N, true);
vector<pair<int, int>> primes;
void sieve()
{
    is_prime[1] = false;

    for (int i = 2; i < N; i++) {
        if (is_prime[i]) {
            for (int j = i + i; j < N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}
void solve(int pos)
{
       cout << "(" << primes[pos].first << ", " << primes[pos].second << ")" << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();

    // cin >> tc;
    primes.push_back({ 0, 0 });
    for (int i = 2; i < N; i++) {

        if (is_prime[i] and is_prime[i + 2]) {

            primes.push_back({ i, i + 2 });
        }
    }

  

    int pos;
    while (cin >> pos) {
        solve(pos);
    }
    return 0;
}