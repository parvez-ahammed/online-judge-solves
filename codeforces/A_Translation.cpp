
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string s,t;
    cin >> s >> t;
    string reversed = s;
    reverse(reversed.begin(),reversed.end());
    if (!reversed.compare(t))
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
    return 0;
}