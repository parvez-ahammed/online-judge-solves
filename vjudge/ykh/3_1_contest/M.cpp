#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{

    int g, l;
    cin >> g >> l;

 

    if (l % g == 0 && l >=g )
        cout << g << " " << l << endl;
    else
        cout << -1 << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}