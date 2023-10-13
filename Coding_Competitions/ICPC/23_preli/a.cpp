
#include "bits/stdc++.h"
using namespace std;

#define int long long int

#define MAXN 100001

vector<set<int>> factors(MAXN);

int spf[MAXN];

void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
        spf[i] = i;

    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i < MAXN; i++) {

        if (spf[i] == i) {

            for (int j = i * i; j < MAXN; j += i)

                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

set<int> getFactorization(int x)
{
    set<int> ret;
    while (x != 1) {
        ret.insert(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

struct DS {
    multiset<int> ms;

    set<int> se;

    void addPrimeFactors(int x)
    {
        for (auto y : factors[x]) {
            ms.insert(y);
            se.insert(y);
        }
    }

    bool invalidInsertion(int k)
    {
        return se.size() > k;
    }

    bool exactlyK(int k)
    {
        return se.size() == k;
    }

    void removePrimeFactors(int x)
    {
        for (auto y : factors[x]) {
            // before erasing keep check whether they are present or not

            if (ms.find(y) == ms.end()) {
                continue;
            }

            ms.erase(ms.find(y));
            se.erase(y);
        }
    }

    set<int> getPrimesSet()
    {
        return se;
    }

    int sizeGreaterThanK(int k)
    {
        return se.size() == k;
    }

    void print()
    {
        for (auto x : ms) {
            cout << x << " ";
        }
        cout << endl;
    }
};
// A perfect prime factor is a prime factor that exists in all the elements of an array
// An almost perfect factor is a prime factor that exists at least once in an element of the array,

void solve()
{

    int n, k;
    cin >> n >> k;

    DS ds;

    vector<int> v(n + 1);

    // cout << endl;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    // now I will implement a two pointer usign the DS data structure

    int r = 1;

    map<pair<int, int>, set<int>> mp;

    for (int l = 1; l <= n; l++) {
        while (r <= n) {
            int x = v[r];
            ds.addPrimeFactors(x);

            // ds.print();

            if (ds.invalidInsertion(k)) {
                break;
            }

            if (ds.exactlyK(k)) {
                mp[{ l, r }] = ds.getPrimesSet();
            }

            r++;
        }

        ds.removePrimeFactors(v[l]);
    }

    // cout << endl;

    int len = 0;

    // print the mp

    for (auto x : mp) {
        // cout << x.first.first << " " << x.first.second << " ";

        int l = x.first.first;
        int r = x.first.second;

        int perfectCnt = 0;
        for (auto y : x.second) {

            // is y a perfect prime factor?
            bool isPerfect = true;
            for (int i = l; i <= r; i++) {
                if (factors[v[i]].find(y) == factors[v[i]].end()) {
                    isPerfect = false;
                    break;
                }
            }

            if (isPerfect) {
                perfectCnt++;
            }

            // cout << y << " ";
        }

        if (perfectCnt == 0)
            len = max(len, r - l + 1);

        // cout << endl;
    }

    cout << len << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    for (int i = 1; i < MAXN; i++) {
        factors[i] = getFactorization(i);
    }

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        cout << "Case " << i << ": ";
        solve();
    }

    // cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " ms.\n";

    return 0;
}
