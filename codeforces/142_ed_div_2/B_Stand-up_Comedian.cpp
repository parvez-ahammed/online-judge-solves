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
    ll a1, a2, a3, a4;

    cin >> a1 >> a2 >> a3 >> a4;

    ll ans = 0;

    if (a1 == 0)
    {
        if (a4 > 0 or a2 > 0 or a3 > 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    else
    {

        if (a2 != 0 && a3 != 0)
        {
            (a1 < a4) ? a1 = (ll)(2 * a1) + 1 : a1 = (ll)(a1 + a4);
            ans = (ll)min(a2, a3) * 2;
            cout << a1 + (ll)(ans) << endl;
        }

        else if (a2 == 0 && a3 == 0)
        {
            (a1 < a4) ? a1 = (ll)(2 * a1) + 1 : a1 = (ll)(a1 + a4);
            cout << a1 << endl;
        }
        else
        {

            ll second_ans = 0;

            if (a4 <= a1)
            {
                second_ans = 1;
            }

            (a1 < a4) ? a1 = (ll)(2 * a1) + 1 : a1 = (ll)(a1 + a4);

            cout << a1 + second_ans << endl;
        }
    }
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