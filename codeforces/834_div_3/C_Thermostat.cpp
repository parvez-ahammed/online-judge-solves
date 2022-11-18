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

int solve()
{

    ll l, r, x, a, b, ans = 0;
    cin >> l >> r >> x >> a >> b;

    if (a == b)
        ans = 0;
    else if (abs(a - b) >= x)
        ans = 1;
    else if ((abs(a - l) < x && abs(r - a) < x) || (abs(b - l) < x && abs(r - b) < x))
        ans = -1;
    else
    {
        abs(a - l) < x ? (abs(r - b) >= x ? ans = 2 : ans = 3) : (abs(r - a) < x) ? (abs(b - l) >= x ? ans = 2 : ans = 3)
                                                                                  : ans = 2;
        ;
    }

    return ans;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int needed = solve();

        cout << needed << endl;
    }
    return 0;
}