
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <string>
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    string str,temp_str;

    cin >> str;
    temp_str = str;
    n--;
    ll groups = 1;

    while (n--)
    {       
        cin >> str ;
        if (temp_str != str) groups++;
        temp_str = str;
           
    }
    cout << groups <<endl;

   

    return 0;
}