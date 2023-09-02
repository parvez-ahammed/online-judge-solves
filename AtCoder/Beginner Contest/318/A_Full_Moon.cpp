#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int calc(int m, int x, int p)
{
    return (m + (x * p));
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, p;
    cin >> n >> m >> p;

    if (m > n)
    {
        cout << 0 << endl;
        return (0);
    }

    int cnt = 1;

    int x = 1;

   while (calc(m , x , p) <= n)
    {
        cnt++;
        x++;
    }

    cout << cnt << endl;

    return (0);
}