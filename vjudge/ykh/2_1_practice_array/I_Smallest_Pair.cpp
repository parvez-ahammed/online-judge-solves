
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
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        int minv = INT_MAX;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
                minv = min(arr[i] + arr[j] + j - i, minv);
        }

        cout << minv << endl;
    }
    return 0;
}