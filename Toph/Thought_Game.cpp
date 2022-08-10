#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y;
        cin >> x >> y;
        if (((x + y) / 2) % 2 == 0)
        {
            cout << "Sadia will be happy." << endl;
        }
        else
        {
            cout << "Oops!" << endl;
        }
    }
}