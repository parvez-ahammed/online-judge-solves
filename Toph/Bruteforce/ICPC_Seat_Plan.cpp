#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int32_t main()
{

    FAST;
    int cnt = 0;
    int n, m, x;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            cnt += (x == 0 ? 1 : 0);
        }

        
    }
    cout << cnt << endl;
    return 0;
}