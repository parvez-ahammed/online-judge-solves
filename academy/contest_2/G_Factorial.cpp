#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double factorial(double a)
{
    if (a == 1)
    {
        return 1;
    }
    else
        return a * factorial(a - 1);
}

int main()
{
    double n;
    cin >> n;
    double m;
    double res = 1;
    while (n--)
    {
        cin >> m;
        if (m == 0)
        {
            res = 0;
        }
        else
        {
            res = factorial(m);
        }

        cout << res << endl;
    }

    return 0;
}
