#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, r;
    int sum = 0;

    cin >> t;

    while (t--)
    {
        cin >> n;

        r = 0;

        for (int c = n/2;; c++)
        {
            if ((((c * (c + 1)) / 2) - r) == n)
            {
                cout << (r + 1) << " " << (c - r) << endl;
                break;
            }
            else if ((((c * (c + 1)) / 2) - r) > n)
            {
                c -= 3;
                r++;
            }
        }
    }

    return 0;
}
