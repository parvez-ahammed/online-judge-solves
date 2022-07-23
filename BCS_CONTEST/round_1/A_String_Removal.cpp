#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void eraseAllSubStr(string &mainStr, const string &toErase)
{
    size_t pos = string::npos;

    while ((pos = mainStr.find(toErase)) != string::npos)
    {
        mainStr.erase(pos, toErase.length());
    }
}

int main()
{

    int tc;
    cin >> tc;

    while (tc--)
    {
        string str;
        cin >> str;

        int count1 = count(str.begin(), str.end(), 'a');
        int count2 = count(str.begin(), str.end(), 'b');

        // cout << count1 << " " << count2 << endl;

        if (count1 != count2)
        {
            cout << "NO" << endl;
        }
        else

            cout << "YES" << endl;

        // int n = str.length();

        // if (n == 1 || n % 2 == 1)
        // {

        // }
        // else
        // {
        //     eraseAllSubStr(str, "ab");
        //     eraseAllSubStr(str, "ba");
        //     // cout << str << endl;

        //     if (str.length() == 0)

        //         cout << "YES" << endl;
        //     else
        //         cout << "NO" << endl;
        // }
    }

    return 0;
}