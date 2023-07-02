#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a , b ;char op;
    cin >> a >> op >> b;

    long long c = a, d =b;

    if (op == '+')
        cout << c + d;
    if (op == '-')
        cout << c - d;
    if (op == '*')
        cout << c * d;
    if (op == '/')
        cout << c / d;
}