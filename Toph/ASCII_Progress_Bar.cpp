#include <bits/stdc++.h>

using namespace std;
int main()
{
    double perc;
    cin >> perc;

    int pluss = perc / 10;
    cout << "[";

    for (int i = 0; i < 10; i++)
    {
        if (i < pluss)
            cout << "+";
        else
            cout << ".";
    }
    cout << "]"
         << " " << floor(perc) << "%"<< endl;
    return 0;
}