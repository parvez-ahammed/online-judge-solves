#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    (a + (c % 2) > b) ? cout << "First" << endl : cout << "Second" << endl;
}

int32_t main()
{

    FAST;
    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }
    return 0;
}