#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    unsigned long long int fac = 1;
    cin >> num;

    for (int i = 2; i <= num; i++)
        fac *= i, fac %= 10000;

    if (fac == 0)
        cout << "0000";
    else
        cout << fac;

    return 0;
}