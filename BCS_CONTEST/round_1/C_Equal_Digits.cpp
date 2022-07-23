#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string t;
    cin >> t;

    char c = t[0];
    int cn = (int)c;

    int len = t.length();

    string p(len, c);

    long long num1 = stoll(p);
    long long num2 = stoll(t);

    while (num1 < num2)
    {
        cn += 1;
        c = (char)cn;
        string pn(len, c);
        p = pn;
        num1 = stoll(p);
    }

    cout << p << endl;

    return 0;
}