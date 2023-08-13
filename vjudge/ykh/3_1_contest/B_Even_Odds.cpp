#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll k, n;
    cin >> n >> k;

    if (k <= ((n + 1) / 2))
    {
        cout << (k * 2) - 1 << endl;
    }
    else
    {
        k -= ((n + 1) / 2);
        cout << (k * 2) << endl;
    }
    return 0;
}