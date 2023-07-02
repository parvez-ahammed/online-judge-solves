#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    char c = '*';

    for (int i = 1; i <= a; i++)
    {

        for (int j = 0; j < i; j++)
            cout << c;

        cout << endl;
    }
}