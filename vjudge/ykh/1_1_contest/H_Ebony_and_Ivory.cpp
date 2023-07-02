#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    bool possible = false;
    int result = 0;

    for (int i = 0; (i * a) <= c && !possible; i++)
    {

        for (int j = 0; (j * b) <= c; j++)
        {
            result = (i * a) + (j * b);

            if ((result == c))
            {

                possible = true;
                break;
            }
        }
    }

    if (possible)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}