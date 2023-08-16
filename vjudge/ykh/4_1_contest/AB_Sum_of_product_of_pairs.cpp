#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"
const int mod = 1e9 + 7;

int32_t main()
{

    FAST;

    int n;
    cin >> n;
    vector<ll> v(n + 5), suffix(n + 5, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = n - 1; i > 0; i--)
    {
        suffix[i] = (v[i] + suffix[i + 1]);

        suffix[i] %= mod;
    }

    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        ll val = v[i] * suffix[i + 1];
        val %= mod;
        sum += val;
        sum %= mod;
    }

    cout << sum << endl;

    return 0;
}