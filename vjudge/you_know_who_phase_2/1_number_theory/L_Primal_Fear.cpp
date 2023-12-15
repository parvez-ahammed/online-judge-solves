#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MAXN = 1e6 + 5;

vector<bool> isPrime(MAXN, true), fearSomePrime(MAXN, false);

vector<int> fearSomePrimeCount(MAXN, 0);

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

bool isFearSomePrime(int prime)
{
    
    string s = to_string(prime);

    if (s.find('0') != string::npos)
        return false;

    for (int i = 1; i < s.size(); i++) {
        string temp = s.substr(i);
        int num = stoi(temp);
        if (!isPrime[num]) {
            return false;
        }
    }

    return true;
}

void findOutFearSomePrime()
{
    for (int i = 2; i < MAXN; i++) {
        if (isPrime[i]) {
            fearSomePrime[i] = isFearSomePrime(i);
        }
    }

    for (int i = 2; i < MAXN; i++) {
        fearSomePrimeCount[i] = fearSomePrimeCount[i - 1] + fearSomePrime[i];
    }
}

void solve()
{

    int n;
    cin >> n;

    cout << fearSomePrimeCount[n] << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    findOutFearSomePrime();

    
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}