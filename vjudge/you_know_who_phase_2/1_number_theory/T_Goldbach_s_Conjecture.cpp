#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MAXN = 1e7 + 5;

vector<bool> isPrime(MAXN, true);

void sieve()
{

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
}
void solve()
{

    int n;
    cin >> n;

    int cnt = 0;

    for (int i = 2; i <= n / 2; i++) {
        if (isPrime[i] && isPrime[n - i]) {
            cnt++;
        }
    }

    cout << cnt << endl;
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