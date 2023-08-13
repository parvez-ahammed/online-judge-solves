#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"
int a, b, c, d;

bool possible()
{
    return (a < b and c < d and a < c and b < d);
}

void rotate()
{
    int w = a, x = b, y = c, z = d;
    a = x;
    b = z;
    c = w;
    d = y;
}
void solve()
{

    cin >> a >> b >> c >> d;

    for (int i = 0; i < 5; i++)
    {

   
        if (possible())
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            rotate();
        }
    }

    cout << "NO" << endl;
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