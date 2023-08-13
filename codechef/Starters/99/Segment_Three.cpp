#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli tc;
    cin >> tc;

    while (tc--)
    {
        lli n;
        cin >> n;

        vector<lli> days(n);
        for (int i = 0; i < n; i++)
        {
            cin >> days[i];
            days[i] %= 3;
        }

        int result = INT_MAX;

        vector<vector<int>> arri = {{1, 1, 1}, {2, 2, 2}, {0, 0, 0}, {0, 1, 2}, {0, 2, 1}, {1, 0, 2}, {1, 2, 0}, {2, 0, 1}, {2, 1, 0}};

        for (int index = 0; index < arri.size(); index++)
        {
            int count = 0;
            for (int i = 0; i < n; i++)
                count += (3 + arri[index][i % 3] - days[i]) % 3;

            result = min(count, result);
        }

        cout << result << endl;
    }

    return 0;
}