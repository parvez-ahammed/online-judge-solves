#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m;

    int even = 0, odd = 0, positive = 0, negative = 0;

    while (n--)
    {
        cin >> m;

        if (m % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (m > 0)
        {
            positive++;
        }
        else if (m < 0)
        {
            negative++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;

    return 0;
}