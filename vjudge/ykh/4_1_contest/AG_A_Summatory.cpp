#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"
const int MOD = 1000000003;

vector<ll> sums(1e6 + 10);

ll fn(ll n)
{

    ll res = ((n * (n + 1))) / 2;
    res %= MOD;
    return (res * res) % MOD;
}

void pre()
{

    ll sum = 0;
    for (int i = 1; i <= 1e6 + 5; i++)
    {

        sum += fn(i);
        sum %= MOD;
        sums[i] = sum;
    }
}

void solve()
{
    int n;

    cin >> n;

    cout << sums[n] << endl;
}

int32_t main()
{

    FAST;
    pre();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}