#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

void solve()
{

    ll a, b;
    cin >> a >> b;
    ll n = a * b - a - b;

    // if (n == -1)
    //     n = max(a, b) - 1;
    // if (n == 0)
    //     n = 2;

    // cout << n << endl;

    // cout << (a * b) / __gcd(a, b) << endl;
    if (a > 2 && b > 2)
        cout << (max(a, b) * __gcd(a, b)) - a - b << endl;
    else
        cout << 2 << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}