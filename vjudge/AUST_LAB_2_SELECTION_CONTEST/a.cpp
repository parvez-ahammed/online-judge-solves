#include <bits/stdc++.h>
using namespace std;


void solve()
{

    int x , y;

    cin >> x >> y;
    y % x == 0 ?  cout << 0 << endl : cout << (ceil(y/(float)x) * x )  - y << endl; 
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}