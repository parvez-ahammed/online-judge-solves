#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '\\')
            break;
        cout << str[i];
    }
}