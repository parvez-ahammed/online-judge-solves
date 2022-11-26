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
    int n, x;

    cin >> n >> x;
    if (n % x == 0)
    {
        cout << x << " ";
        vector<ll> v(n + 1);

        
        v[x] = 1;
        int j;
        for (int i = 2; i < n; i++)
        {
            if (v[i])
            {
                for (j = i * 2; j <= n; j += i)
                {
                    if (n % j == 0)
                        break;
                }
                v[j] = 1;
                cout << j << " ";
            }
            else
                cout << i << " ";
        }
        cout << 1 << endl;
    }
    else
        cout << -1 << endl;
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