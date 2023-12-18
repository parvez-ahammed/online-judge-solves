#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 1e7 + 9;
int spf[N];
vector<int> primes;
void sieve()
{
    for (int i = 2; i < N; i++) {
        if (spf[i] == 0)
            spf[i] = i, primes.push_back(i);
        int sz = primes.size();
        for (int j = 0; j < sz && i * primes[j] < N && primes[j] <= spf[i]; j++) {
            spf[i * primes[j]] = primes[j];
        }
    }
}
bool ok(int n)
{

    if (n < N)
        return spf[n] == n;

    for (int i = 0; i < primes.size(); i++) {
        if (n % primes[i] == 0)
            return false;
    }

    return true;
}

void solve()
{

    int n;
    cin >> n;

    if (n < 7) {
        if (n == 3) {
            cout << 1 << endl;
            cout << 3 << endl;
            return;
        }
        else if (n == 5) {
            cout << 2 << endl;
            cout << 2 << " " << 3 << endl;
            return;
        }
    }

    cout << 3 << endl;

    cout << 3;
    n -= 3;

    for (int i = 2; i < n; i++) {

        int a = i;
        int b = n - i;

        if (ok(a) and ok(b)) {
            cout << " " << a << " " << b << endl;
            return;
        }
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