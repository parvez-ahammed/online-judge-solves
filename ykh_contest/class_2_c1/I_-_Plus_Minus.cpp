#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int tot = n;

    int temp = 0;
    int pp = 0;
    int pn = 0;
    int pz = 0;

    while (tot--)
    {
        cin >> temp;

        if (temp == 0)
        {
            pz++;
        }
        else if (temp > 0)
        {
            pp++;
        }
        else
        {
            pn++;
        }
    }
    cout << fixed << setprecision(6);
    float fn = n;

    cout << pp/fn << endl;
    cout << pn/fn << endl;
    cout << pz/fn << endl;
}