
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    int n;
    int a;
    int max = 0;a
    int curr_max_length = 0;
    int length = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a >= max)
        {
            //cout << a;
            length++;

            if (curr_max_length < length)
            {
                curr_max_length = length;
            }
        }
        else if (a < max)
        {
            //cout << a;
            if (curr_max_length < length)
            {
                curr_max_length = length;
            }
            //cout << " Breaking points " << a <<endl;
            length = 1;
        }
        max = a;
    }

    cout << curr_max_length;
    return 0;
}