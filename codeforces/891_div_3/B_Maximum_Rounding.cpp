#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{

    string str;
    cin >> str;

    int n = str.size();

    vector<int> v(n), b(n);

    for (int i = 0; i < n; i++)
    {
        v[i] = str[i] - '0';
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (v[i] >= 5 && v[i - 1] <= 9)
        {
            v[i - 1]++;
            b[i - 1] = 1;
        }
    }

    if (v[0] >= 5)
        b[0] = 2;

    if (b[0] == 2)
    {
        cout << 10;
        for (int i = 1; i < n; i++)
            cout << 0;
    }
    else
    {
        int hold = 0;

        for (int i = 0; i < n; i++)
        {
            hold = i;

            if (b[i] == 0)
                cout << v[i];
            else
                break;
        }

        if (hold != n - 1)
        {
            cout << v[hold] ;

            for (int i = hold + 1; i < n; i++)
            {
                cout << 0;
            }
        }
    }

    cout << endl;
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}