#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{

    int n, m;
    cin >> n >> m;

    if (n % 2 == m % 2)
        cout << "Tonya" << endl;
    else
        cout << "Burenka" << endl;
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