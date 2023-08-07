#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    int x, y;

    cin >> x >> y;

    int a = 0, b = 0;

    if (x > y)
    {
        cout << a << " " << b << endl;
        return;
    }
    a = 1;
    b = 1;
    for (int i = a; i < 10; i++)
    {
        for (int j = b; j < 100; j++)
        {

            double val = i * (log10(j * x));
            if (val == log10(y))
            {

                cout << i << " " << j << endl;
                return;
            }
        }
    }

    cout << 0 << " " << 0 << endl;
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}