#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {

            return false;
        }
        i += 1;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (is_prime(n))
        cout << "NO PUNISHMENT" << endl;
    else
        while (n--)
            cout << "I DID NOT DO THE ASSIGNMENT." << endl;

    return 0;
}