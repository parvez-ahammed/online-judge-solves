#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, e;
    char c, d;
    cin >> a >> c >> b >> d >> e;

    long long ans = 0;

    if (c == '+')
        ans = a + b;
    if (c == '-')
        ans = a - b;
    if (c == '*')
        ans = a * b;

    (ans == e) ? cout << "Yes" : cout << ans;
}