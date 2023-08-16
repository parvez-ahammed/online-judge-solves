#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

// 4 6
// 1 2 3 4
// 1 2 3 4 5 6

// 1 1 , 1 3 , 1 5 , 3 1 , 3 3 , 3 5
// 2 2 , 2 4 , 2 6 , 4 2 , 4 4 , 4 6

void solve()
{

    int a, b;
    cin >> a >> b;

    int aEvens = a / 2;
    int aOdds = a - aEvens;

    int bEvens = b / 2;
    int bOdds = b - bEvens;

    ll firstComb = aEvens * (bEvens * 1ll);
    ll secondComb = aOdds * (bOdds * 1ll);

    cout << firstComb + secondComb << endl;
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