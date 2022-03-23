
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    cin >> s;
    int length = s.length();
    string sub = "hello";
    int j = 0, found_letter =0;
    for (int i = 0 ; i < length ; i ++)
    {
        if (s[i] == sub[j])
        {
            j++;
            found_letter ++;
            if (found_letter == 5) break;
        }
    }
   
    if (found_letter == 5)
    {
        cout << "YES";
    }
    else cout << "NO";
    
    return 0;
}