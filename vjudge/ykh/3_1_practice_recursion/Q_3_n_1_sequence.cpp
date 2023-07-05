#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

ll generate(ll n)
{
    if (n == 1)
        return 1;
    if (n & 1)
        return 1 + generate((3 * n) + 1);
    else
        return 1 + generate(n / 2);
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    cout << generate(n) << endl;
    return 0;
}