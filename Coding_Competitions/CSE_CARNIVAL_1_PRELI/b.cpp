#include <bits/stdc++.h>
using namespace std;

bool is_valid_minus(int i, int tmp, int n)
{
    return (i - 1 >= 0 && tmp >= 0 && tmp < n);
}

bool is_valid_plus(int i, int tmp, int n)
{
    return (i + 1 < n && tmp >= 0 && tmp < n);
}

int main()
{
    int n, r, c;
    cin >> n >> r >> c;
    char arr[n][n];
    r--;
    c--;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = '.';
        }
    }

    int tmp = r;
    for (int i = c; i >= -1; i--)
    {
        if (is_valid_minus(i, tmp, n))
            arr[tmp][i - 1] = '*';
        if (is_valid_plus(i, tmp, n))
            arr[tmp][i + 1] = '*';
        tmp--;
    }
    tmp = r;
    for (int i = c; i <= n; i++)
    {
        if (is_valid_minus(i, tmp, n))
            arr[tmp][i - 1] = '*';
        if (is_valid_plus(i, tmp, n))
            arr[tmp][i + 1] = '*';
        tmp--;
    }
    tmp = r;
    for (int i = c; i <= n; i++)
    {
        if (is_valid_minus(i, tmp, n))
            arr[tmp][i - 1] = '*';
        if (is_valid_plus(i, tmp, n))
            arr[tmp][i + 1] = '*';
        tmp++;
    }

    tmp = r;

    for (int i = c; i >= -1; i--)
    {
        if (is_valid_minus(i, tmp, n))
            arr[tmp][i - 1] = '*';
        if (is_valid_plus(i, tmp, n))
            arr[tmp][i +1] = '*';
        tmp++;
    
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}
