#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MOD = 1e9 + 7;

map<int, int> primes, freq;
vector<int> v;
int n, k;

int solvePrime(int vag)
{

    int mn = INT_MAX;
    for (int i = 10; i >= 1; i--)
    {
        if (freq[i])
        {
            for (int j = vag; j <= 10; j += vag)
                if (j >= i)
                    mn = min(mn, j - i);
        }
    }

    if (mn == INT_MAX)
    {
        mn = 2;
    }
    return mn;
}

void solve4()
{

    int mn = INT_MAX;

    if (primes[2] >= 2)
        mn = min(mn, 0);

    if (primes[2] == 1)
    {
        for (int i = 1; i <= 10; i += 2)
        {
            if (freq[i])
                mn = min(mn, 1);
        }
    }

    if (freq[3] >= 1 or freq[7] >= 1)
        mn = min(mn, 1);

    mn = min(mn, 2);

    cout << mn << endl;
}

void primeFactor(int num)
{
    while (num % 2 == 0)
    {
        primes[2]++;
        num /= 2;
    }

    for (int j = 3; j <= sqrt(n); j = j + 2)
    {

        while (num % j == 0)
        {
            primes[j]++;
            num /= j;
        }
    }

    if (num > 1)
    {
        primes[num]++;
    }
}
void solve()
{

    cin >> n >> k;

    v.resize(n + 1);
    primes.clear();
    freq.clear();

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;

        primeFactor(v[i]);
    }

    if (k == 4)
    {
        solve4();
        return;
    }

    cout << (primes[k] ? 0 : solvePrime(k)) << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}