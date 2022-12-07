#include <iostream>
using namespace std;
int main()
{
    int n, m = 0, flag = 0;

    cin >> n;

    for (int j = 2; j <= n; j++)
    {
        flag = 0;
        m = j / 2;

        for (int i = 2; i <= m; i++)
        {
            if (j % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << j << " ";

        //cout << j << endl;
    }

    return 0;
}