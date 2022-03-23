
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int n_temp = n;
    int a, b, c, d;


    while (true)
    {
        n_temp = ++n;

        a = n_temp % 10;
        n_temp /= 10;

        b = n_temp % 10;
        n_temp /= 10;

        c = n_temp % 10;
        n_temp /= 10;

        d = n_temp % 10;
        n_temp /= 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
           
            break;
        }
        
    }
    cout << n;

    return 0;
}