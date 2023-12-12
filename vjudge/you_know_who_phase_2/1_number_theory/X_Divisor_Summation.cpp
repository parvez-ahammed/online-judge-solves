#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int MAXN = 1e6 + 5;

struct PRIME {

    int distinctPrimeFactor = 0;
    ll sumOfDivisors = 1;
    void insertPrimeFac(int prime, int val)
    {
        int occ = 0;
        while (val % prime == 0) {

            val /= prime;
            occ++;
        }

        ll primePower = pow(prime, occ);

        sumOfDivisors *= (1ll * primePower * prime - 1) / (prime - 1);
    }

    ll getSOD()
    {
        return sumOfDivisors;
    }
};

vector<PRIME> TRACKER(1e6 + 5);

void sieve()
{

    vector<bool> prime(MAXN, true);
    for (int i = 2; i < MAXN; i++) {
        if (prime[i]) {
            TRACKER[i].insertPrimeFac(i, i);
            for (int j = i + i; j < MAXN; j += i) {
                prime[j] = false;
                TRACKER[j].insertPrimeFac(i, j);
            }
        }
    }
}

void solve()
{

    int N;
    cin >> N;

    cout << TRACKER[N].getSOD() - N << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}