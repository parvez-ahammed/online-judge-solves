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
    int n;
    cin >> n;
    vi v(n, 0);
    rep(0, n) cin >> v[i];

    int sum = accumulate(v.begin(), v.end(), 0);
    int a_t = v[0], b_t = 0, a_c = v[0], b_c = 0, move = 1;

    int i = 1;
    int j = n - 1;

    while (i <= j)
    {
        ++move;

        // cout << "MOVE " << move << " ";
        if (move & 1)
        {
            a_c = 0;

            while (a_c <= b_c && i <= j)
            {
                a_c += v[i];
                ++i;
            }
            a_t += a_c;

            // cout << " a_t " << a_t << " " << a_c << endl;
        }
        else
        {
            b_c = 0;

            while (b_c <= a_c && j >= i)
            {
                b_c += v[j];
                --j;
            }
            b_t += b_c;

            // cout << " b_t " << b_t << " " << b_c << endl;
        }
    }
    // cout << endl;
    cout << move << " " << a_t << " " << sum - a_t << endl;
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