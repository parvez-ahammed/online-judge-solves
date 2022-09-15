#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int low = 0, high = 1000000, mid = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;

        cout << mid << endl;
        string str;
        cin >> str;

        if (str == "Bingo!")
            break;
        else if (str == "Bigger")
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}