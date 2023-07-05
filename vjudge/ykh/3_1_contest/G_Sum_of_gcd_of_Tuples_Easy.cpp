#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin >> m;
    int ans = 0;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            for (int k = 1; k <= m; k++)
            {
                ans += __gcd(__gcd(i, j) , k);
            }
        }
    }

    cout << ans << endl;
    return 0;
}