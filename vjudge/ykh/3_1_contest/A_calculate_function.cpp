#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll ans = ((n & 1) ? (((n + 1) / 2) * -1) : (n - (n / 2)));
    cout << ans << endl;

    return 0;
}