

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int res;

    int max = a > b ? a : b;

    if (a == b)
    {
        cout << a + b;
    }
    else
        cout << max + max - 1;
}