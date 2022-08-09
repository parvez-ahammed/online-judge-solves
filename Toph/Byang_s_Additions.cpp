#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int first, second;
    do
    {
        first = num1 % 10;
        second = num2 % 10;
        if (first + second >= 10)
        {
            cout << "Yes" << endl;
            return 0;
        }
        num1 /= 10;
        num2 /= 10;

    } while (num1 != 0 && num2 != 0);

    cout << "No" << endl;
    return 0;
}