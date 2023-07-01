#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = 0;

    cin >> n;

    vector<bool> mark(n + 2, true);

    for (int i = 4; i <= n; i += 2)
        mark[i] = 0;

    for (int i = 3; i <= n; i++)
    {
        if (mark[i])
        {
            for (int j = i + i; j <= n; j += i)
                mark[j] = false;
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (mark[i])
            cout << i << " ";
    }

    return 0;
}