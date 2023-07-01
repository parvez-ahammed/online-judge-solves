#include <iostream>
using namespace std;
int main()
{
    int n, i, m = 0, flag = 0;

    cin >> n;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}