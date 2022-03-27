
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <string>

int main()
{

    long long int n;
    long long int k;

    // vector<long long int> vect;
    // vect.insert(vect.begin(), 1);

    cin >> n >> k;

    // long long int s = 1;
    // for (long long int i = 2; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         vect.push_back(i);
    //     }
    //     else if (i % 2 == 1)

    //     {
    //         vect.insert(vect.begin() + s, i);
    //         s++;
    //     }
    // }

    // // cout << vect.front();

    // long long int pos = 1;
    // long long int value;
    // while (!vect.empty())
    // {
    //     //cout << vect.front();
    //     // vect.pop();
    //     if (pos == k)
    //     {
    //         value = vect.front();
    //         break;
    //     }
    //     pos++;
    //     vect.erase(vect.begin());
    // }
    // cout << value ;

     if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }

    return 0;
}