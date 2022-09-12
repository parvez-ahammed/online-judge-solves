#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {

        int a;
        cin >> a;

        if (a <= 300)
            cout << "3000" << endl;
        else
            cout << a * 10 << endl;
    }
    return 0;
}