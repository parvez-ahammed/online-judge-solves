#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long a, b, c, d;

    cin >> a >> b >> c >> d;

    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    int product = a * b * c * d;
    int last_digits = product % 100;

    last_digits < 10 ? cout << 0 << last_digits << '\n' : cout << last_digits;
}