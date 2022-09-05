#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{

    int tc;

    cin >> tc;

    int i = 1;

    while (tc--)
    {
        int a, b, c;

        cin >> a >> b >> c;

        if ((a + b + c) % 3 == 0)
        {
            cout << "Case " << i << ": Peaceful" << endl;
        }
        else
            cout << "Case " << i << ": Fight" << endl;

        i++;
    }

    return 0;
}