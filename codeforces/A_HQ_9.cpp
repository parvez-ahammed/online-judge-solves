
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    string str;
    cin >> str;

    if ( ((str.find('H')) >=0 && (str.find('H')) <100 )  || ((str.find('Q')) >=0 && (str.find('Q')) <100 ) || ((str.find('9')) >=0 && (str.find('9')) <100 ))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}