#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        int ch;
        int arr[4];
        cin >> ch;

        for (int i = 1; i <= 3 ;i++)
        {
            cin >> arr[i];
        }

        int visited = 0;

        while (ch != 0)
        {
            ch = arr[ch];
            visited++;
        }

        if (visited== 3)cout << "YES" << endl;
        else cout << "NO"<<endl;
    }

    return 0;
}