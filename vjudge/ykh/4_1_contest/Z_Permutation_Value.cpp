#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{

    int n;

    cin >> n;

    cout << 1 << " ";
    for (int i = n; i > 1; i--)
        cout << i << " ";
    cout << endl;
}
int32_t main()
{

    FAST;
    int n;
    cin >> n;

    while (n--)
    {
        solve();
    }
    return 0;
}