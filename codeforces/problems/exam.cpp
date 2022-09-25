
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;

    bool is_possible;

    while (n--)
    {
        cin >> str;
        is_possible = false;

        for (int i = 0; i < str.size(); i++)
        {
            for (int j = i; j < str.size(); j++)
            {
                if (str[i] > str[j])
                {
                    is_possible = true;
                    break;
                }
            }
            if (is_possible)
            {
                break;
            }
        }

        if (is_possible == true)
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
