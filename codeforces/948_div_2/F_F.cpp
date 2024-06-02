#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 1e5 + 7;
bool possible[N];
vector<int> primes;
vector<bool> isprime(N, false);

void sieve()
{
    isprime[1] = false;
    for (int i = 2; i < N; i++) {
        isprime[i] = true;
    }
    for (int i = 2; 1ll * i * i < N; i++) {
        if (isprime[i]) {
            for (int j = 1ll * i * i; j < N; j += i) {
                isprime[j] = false;
            }
        }
    }

    for (int i = 1; i < N; i++) {
        if (isprime[i]) {
            primes.push_back(i);
        }
    }
}

void solve()
{
     int n, m;
    cin >> n >> m;

    vector<int> a(n);

    set<int> s;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        for (auto p : primes) {
            if (a[i] < p)
                break;
            if ((a[i] % p) == 0) {
                s.insert(p);
            }
        }
    }

    for (int p : s) {
        for (int j = p; j < N; j += p) {
            possible[j] = true;
        }
    }

    vector<int> kes;

    for (int i = 1; i <= m; i++) {
        if (!possible[i]) {
            kes.push_back(i);
        }
    }

    cout << kes.size() << endl;
    for (int x : kes) {
        cout << x << endl;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    sieve();
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}