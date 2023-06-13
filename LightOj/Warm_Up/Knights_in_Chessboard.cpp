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

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll ans;
    if (m == 1 or n == 1)
        ans = max(n, m);
    else if (n > 2 && m > 2)
        ans = ceil((n * m) / 2.0);
    else
    {
        ll totalSquare = m * n;
        ans = 4;
        ll remain = max(m, n) - 2;

        if (remain > 2)
        {
            vector<bool> canTake(300, true);

            for (int i = 1, j = 2; i < 250 && j < 250; i += 4, j += 4)
                canTake[i] = canTake[j] = false;

            ll count = 0;

            for (int i = 1; i <= remain; i++)
            {
                if (canTake[i])
                    count++;
            }

            count *= 2;

            ans += count;
        }
    }

    cout << ans << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    int i = 1;
    while (tc--)
    {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}