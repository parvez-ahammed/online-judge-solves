#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
void solve(int n)
{
    ll c1, c2, n1, n2;

    cin >> c1 >> n1 >> c2 >> n2;
    ll ans = LONG_LONG_MAX;

    ll take1 = -1, take2 = -1;
    for (int a = 1; a < 1e6; a++)
    {
        if (n1 * a <= n)
        {
            double b = (n - (n1 * a)) / (n2 * 1.0);

            if ((int)b == b)
            {
                ll curr = (c1 * a) + (c2, b);
                if (curr < ans)
                {
                    take1 = a;
                    take2 = b;
                }
            }
        }
    }

    if (take1 == -1 || take2 == -1)
    {
        cout << "failed";
    }
    else
    {
        cout << take1 << " " << take2 << endl;
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n && n != 0)
    {
        solve(n);
    }
    return 0;
}