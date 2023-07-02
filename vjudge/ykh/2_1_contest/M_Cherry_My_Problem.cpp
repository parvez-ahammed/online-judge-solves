#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        long long arr[n];
        long long mul = 1;
        long long res;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0)
            {
                res = arr[i] * arr[i - 1];
                mul = max(mul, res);
            }
        }

        cout << mul << endl;
    }
    return 0;
}