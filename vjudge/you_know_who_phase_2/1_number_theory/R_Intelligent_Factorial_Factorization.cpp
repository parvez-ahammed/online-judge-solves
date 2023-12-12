#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int MAXN = 200;
vector<int> v(MAXN);

int N;

struct PRIME {

    map<int, int> primeOccurance;

    void insertPrimeFac(int prime, int val)
    {
        int occ = 0;
        while (val % prime == 0) {
            primeOccurance[prime]++;
            val /= prime;
            occ++;
        }
    }

    map<int, int> getMap()
    {
        return primeOccurance;
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

//

void solve()
{

    cin >> N;
    cout << N << " =";

    map<int, int> finalMp;

    int gpf = 2;

    // this could be more optimzed by doing prefix sum on the occurance of prime
    // it would only take O(1) time to get the occurance of prime

    for (int i = 1; i <= N; i++) {
        map<int, int> valMap = TRACKER[i].getMap();

        for (auto [prime, occ] : valMap) {
            finalMp[prime] += occ;
            gpf = max(gpf, prime);
        }
    }

    for (auto [prime, occ] : finalMp) {
        if (prime == gpf)
            cout << " " << prime << " (" << occ << ")";
        else
            cout << " " << prime << " (" << occ << ") *";
    }
    cout << endl;
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