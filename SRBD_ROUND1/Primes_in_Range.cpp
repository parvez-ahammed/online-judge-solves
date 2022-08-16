
#include <bits/stdc++.h>
using namespace std;

vector<int> primes;



void SieveOfEratosthenes(int n)
{

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            primes.push_back(p);
}

int main()
{
    int n = 1000000;

    SieveOfEratosthenes(n);

    int tc;
    cin >> tc;

    while (tc--)
    {

        int low, high;
        cin >> low >> high;
         int count = 0;

        for (int i = 0; i < primes.size();i++)
        {
            if (primes[i] > high)
                break;
            else if (primes[i] >= low && primes[i] <= high)
                count++;
        }

        cout << count << endl;
    }
    return 0;
}
