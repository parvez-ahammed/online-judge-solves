
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v;
        int temp;

        vector<int> cmp;

        for (int i = 1; i <= n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        int count = 0;

        for (int i = 0; i < k; i++)
        {
            if (v[i] > k)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}