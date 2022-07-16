#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int temp;
    int sump = 0, sums = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            if (i == j)
            {
                sump += temp;
            }

            if (n - i - 1 == j)
            {

                sums += temp;
            }
        }
    }

    cout << abs(sump - sums) << endl;
}