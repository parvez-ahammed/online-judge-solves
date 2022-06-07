#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string rev = str;
    reverse(str.begin(), str.end());
    if (rev == str)
    {
        cout << stoi(str)<<endl;
        cout << "YES" << endl;
    }
    else
    {
        cout << stoi(str)<<endl;
         cout << "NO" << endl;
    }
       

    return 0;
}