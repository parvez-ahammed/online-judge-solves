#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int s, t;

    cin >> s >> t;

    int count = 0;
    int res = 0;

    for (int a = 0; a <= s; a++)
    {
        for (int b = 0; b + a <= s; b++)
        {
            for (int c = 0; a + b + c <= s; c++)
            {
                res = a * b * c;

                if (res <= t)
                {
                    count += 1;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}