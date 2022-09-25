
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool is_upper = false;

    

    for( int i = 1 ; i < s.size() ; i ++)
    {
        if (isupper(s[i]))
        {
            is_upper = true;
        }
        else {
            is_upper = false;
            break;
        }
    }
    if ( is_upper == true)
    {
         for(int i = 0; i < s.length(); i++)
        {
            if(islower(s[i]))
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);      
        }
    }

    if (s.size() == 1  && islower(s[0]))
    {
        s[0] = toupper(s[0]);
    }
    else if  (s.size() == 1  && isupper(s[0]))
    {
        s[0] = tolower(s[0]);   
    }
     cout << s;

    return 0;
}