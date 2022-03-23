
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n ;
    string s;

    cin >> n >> s;
    int count = 0;

    for (int i = 0 ; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            count++;
        }
        else if (s[i] == 'D')
        {
            count--;
        }
    }
    if (count == 0)
    {
        cout << "Friendship";
    }
    else if (count > 0 )
    {
        cout << "Anton";
    }
     else if (count < 0 )
    {
        cout << "Danik";
    }

    return 0;
}