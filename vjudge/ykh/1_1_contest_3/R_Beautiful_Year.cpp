#include <bits/stdc++.h>
using namespace std;
int main()
{

    int y;cin >> y;
    ++y;
    for (int i = y ; true ; i++)
    {
        string temp = to_string(i);
        set<char> s;

        for (int i =0 ;i < 4 ;i++) s.insert(temp[i]);

        if (s.size() == 4) 
        {
            cout << i ;
            break;
        }
    }
}