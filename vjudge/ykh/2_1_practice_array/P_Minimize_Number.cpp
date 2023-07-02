#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n, 0);

    bool possible = true;
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 1 && possible)
            possible = false;
    }

    bool all_even = true;

    while (all_even)
    {

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                all_even = false;
                break;
            }
            else if (v[i] % 2 == 0)
                v[i] /= 2;
            else
            {
                all_even = false;
                break;
            }
        }

        if (all_even)
            count++;
    }

    if (possible)
        cout << count << "\n";
    else
        cout << 0 << "\n";
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