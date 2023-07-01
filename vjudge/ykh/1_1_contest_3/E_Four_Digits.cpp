#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    string str = to_string(a);

    int size = str.size();
    if (size == 3)
    {
        str.insert(0,"0");
    }
    else if (size == 2)
    {
        str.insert(0,"0");
        str.insert(1,"0");
    }
    else if (size == 1)
    {
        str.insert(0,"0");
        str.insert(1,"0");
        str.insert(2,"0");
        
    }
    cout << str;
    return 0;
}