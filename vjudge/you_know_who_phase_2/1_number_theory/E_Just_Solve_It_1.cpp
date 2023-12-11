#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int MAXN = 1e6 + 5;
vector<int> v(MAXN);

int N;

struct PRIME {
    int spf = INT_MAX;
    int gpf = 2;

    map<int, int> primeOccurance;
    int distinctPrimeFactor = 0;
    int totalPrimeFactors = 0;
    int numberOfDivisors = 1;
    ll sumOfDivisors = 1;
    bool calculationDone = false;
    void insertPrimeFac(int prime, int val)
    {
        int occ = 0;
        while (val % prime == 0) {
            primeOccurance[prime]++;
            val /= prime;
            occ++;
        }

        spf = min(spf, prime);
        gpf = max(gpf, prime);
        distinctPrimeFactor++;
        numberOfDivisors *= (occ + 1);
        totalPrimeFactors += occ;

        ll primePower = pow(prime, occ);

        sumOfDivisors *= (1ll * primePower * prime - 1) / (prime - 1);
    }

    void printValues()
    {

        cout << spf << " ";
        cout << gpf << " ";
        cout << distinctPrimeFactor << " ";
        cout << totalPrimeFactors << " ";
        cout << numberOfDivisors << " ";
        cout << sumOfDivisors << " ";
        cout << endl;
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
    sieve();
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> v[i];
        TRACKER[v[i]].printValues();
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