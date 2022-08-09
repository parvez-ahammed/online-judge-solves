#include <bits/stdc++.h>
using namespace std;

#define N 499999

int main()
{
    int num[N];
    int limit = sqrt(N);

    for (int i = 0; i < N; i++)
        num[i] = i + 1;

    vector<int> primes;

    for (int i = 1; i <= limit; i++)
    {
        if (num[i] != 0)
        {

            for (int j = pow(num[i], 2); j <= N; j = j + num[i])
            {
                num[j - 1] = 0;
            }
        }
    }
    for (int  i= 1; i < N; i++)
    {
        if (num[i] != 0)
            primes.push_back(num[i]);
    }

    
    int pos;
    cin >> pos;

    cout << primes[pos - 1] << endl;

    return 0;
}