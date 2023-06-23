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
#define BIG_MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{

    ll a, b, c;
    cin >> a >> b >> c;
    ll count = 0;

    if (a == b && b == c && ! (a & 1) )
    {
        count = -1;
    }

    else
    {
        while (true)
        {
            if (a & 1 || b & 1 || c & 1)
                break;
            count++;

            int ta = a >> 1, tb = b >> 1, tc = c >> 1;
            a = tb + tc;
            b = ta + tc;
            c = ta + tb;
        }
    }

    cout << count << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}