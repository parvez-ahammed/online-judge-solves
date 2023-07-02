#include <bits/stdc++.h>
using namespace std;
int main()
{

    char c;
    cin >> c;
    isupper(c) ? cout << char(int(c) + 32) << endl
               : cout << char(int(c) - 32) << endl;
}