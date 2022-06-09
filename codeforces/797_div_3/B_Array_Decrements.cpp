#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double tc;
    cin >> tc;

    int max_diff = 0;
    int curr_diff;
    while (tc--)
    {
        int n;
        cin >> n;

        int arr[n];
        int arr2[n];
        int diff[n];
        bool possible = true;
        max_diff = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];

            diff[i] = arr[i] - arr2[i];
            max_diff = max(max_diff, diff[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (diff[i] != max_diff && arr2[i] != 0)
            {
                possible = false;
                break;
            }
        }

        if (possible && max_diff >= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

