#include <bits/stdc++.h>
using namespace std;

vector<bool> mark(1000000, true);
vector<int> primes;

void sieve(int n)
{

    mark[0] = mark[1] = false;

    for (int i = 4; i <= n; i += 2)
        mark[i] = false;
    primes.push_back(2);

    for (int i = 3; i <= n; i += 2)
    {
        if (mark[i])
        {
            primes.push_back(i);

            if (i * i <= n + 2)
            {
                for (int j = i * i; j <= n; j += i * 2)
                    mark[j] = false;
            }
        }
    }
}
//int cnt = 0;
int numberOfPrime(int n)
{
    int primeCount = 0;

    for (int i = 0; i < primes.size(); i++)
    {
        //cnt++;
        int prime = primes[i];
        if (n % prime == 0)
        {
            primeCount++;
            while (n % prime == 0)
            {
                n /= prime;
                //cnt++;
            }
        }
        if (n <= 1)
            break;
    }

    return primeCount;
}

int main()
{
    int n;
    cin >> n;
    sieve(n);

    int result = 0;

    for (int i = 6; i <= n; i++)
    {
        //cnt++;
        if (numberOfPrime(i) == 2)
            result++;
    }

    cout << result << endl;

    //cout << cnt << endl;

    //cerr << "Time "<< (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
}