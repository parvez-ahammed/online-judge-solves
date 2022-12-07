// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;
bool prime[1000];

void SieveOfEratosthenes(int n)
{

    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

// Driver Code
int main()
{
    long long n = 1000;

    SieveOfEratosthenes(n);

    if (prime[1000])
    {
        cout << 1 << endl;
    }
    else
        cout << -1 << endl;
    cout << "hello " << endl;
    return 0;
}
