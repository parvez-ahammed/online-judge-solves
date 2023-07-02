#include <bits/stdc++.h>
using namespace std;
int main()
{

    int  a  , b ;
    char c;
    cin >> a >> c >> b;

    ((a > b && c == '>') || (a < b && c == '<')  || (a == b && c == '=')  ) ? cout << "Right"  : cout << "Wrong";
}