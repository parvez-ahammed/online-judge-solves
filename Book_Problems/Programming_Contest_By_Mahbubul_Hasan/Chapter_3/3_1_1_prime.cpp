#include <bits/stdc++.h>

using namespace std;

int isBasicPrime(int n)
{

    // Corner case for 1 and 2
    // TIME COMPLEXITY: O(n)
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int isRootPrime(int n)
{
    // Here instead of checking till n, we check till √n because a larger factor of n must be a multiple of smaller factor that has been already checked.

    // TIME COMPLEXITY: O(√n)
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}


// Sieve of Eratosthenes 

vector<bool> mark(1000000, true);
vector <int> prime;

void sieveOfEratosthenes(int n)
{

    mark[1] = false;
    mark[0] = false;


    // TIME COMPLEXITY: O(nloglogn)
    // MARKING ALL THE EVEN NUMBERS AS FALSE
    for (int i = 4; i <= n; i += 2) mark[i] = false;

    // 2 IS THE ONLY EVEN PRIME NUMBER
    prime.push_back(2);


    for (int i = 3; i <= n; i += 2)
    {
        // IF THE NUMBER IS PRIME
        if (mark[i])
        {

            // PUSHING THE PRIME NUMBER IN THE VECTOR
           prime.push_back(i);


            // MARKING ALL THE  ODD MULTIPLES OF THE PRIME NUMBER AS FALSE kEEPING IN CHECK FOR OVERFLOW
            if (i * 1LL * i <= n)
            {
                for (int j = i * i; j <= n; j += i * 2)
                    mark[j] = false;
            }
        }
    }
}




//Segmented Sieve

void segmentedSieve(int L, int R)
{
    // Finding primes upto sqrt(R)
    int limit = sqrt(R);

    // Marking all the numbers as true
    vector<bool> mark(limit + 1, true);

    // Finding all the primes upto sqrt(R)
    for (int i = 2; i <= limit; i++)
    {
        if (mark[i])
        {
            for (int j = i * i; j <= limit; j += i)
                mark[j] = false;
        }
    }

    // Finding all the primes in the range [L,R]
    vector<bool> isPrime(R - L + 1, true);

    // Marking all the multiples of primes in the range [L,R] as false
    for (int i = 2; i <= limit; i++)
    {
        if (mark[i])
        {
            // Finding the first multiple of i in the range [L,R]
            int firstMultiple = (L / i) * i;

            if (firstMultiple < L)
                firstMultiple += i;

            // Marking all the multiples of i in the range [L,R] as false
            for (int j = firstMultiple; j <= R; j += i)
                isPrime[j - L] = false;
        }
    }

    // Printing all the primes in the range [L,R]
    for (int i = L; i <= R; i++)
        if (isPrime[i - L])
            cout << i << " ";
}

//yarinsSieve

void yarinsSieve(int n)
{
    // Marking all the numbers as false
    vector<bool> mark(n + 1, false);

    // Marking all the multiples of primes as true
    for (int i = 2; i <= n; i++)
    {
        if (!mark[i])
        {
            for (int j = i * 2; j <= n; j += i)
                mark[j] = true;
        }
    }

    // Printing all the primes
    for (int i = 2; i <= n; i++)
        if (!mark[i])
            cout << i << " ";
}



int main()
{

    // cout << isBasicPrime(7) << endl;
    // cout << isBasicPrime(8) << endl;

    // sieveOfEratosthenes(1000000);

    // for (int i = 0; i < prime.size(); i++)
    //     cout << prime[i] << " ";
}