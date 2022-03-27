
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    long long k, n, w;

    cin >> k >> n >> w;
    long long total = 0;

    for (long long i = 1; i <= w; i++)
    {
        total += (i * k);
    }

    if (total > n)
    {
        cout << total - n << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}