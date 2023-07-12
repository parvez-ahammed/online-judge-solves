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
    vector<string> v(n);
    rep(0, n) cin >> v[i];
    int half = (n + 1) / 2;
    // cout << half << endl;

    n--;
    int cnt = 0;
    char visited = '.';
    for (int i = 0; i < half; i++)
    {
        for (int j = 0; j < half; j++)
        {

            // cout << i << " " << j << " -> ";

            if (v[i][j] != '.')
            {
                char first = v[i][j];
                char second = v[n - i][n - j];
                // cout << i << j << " " << n - i << n - j << " ";
                char third, fourth;

                if (i == j)
                {
                    third = v[i][n - j];
                    fourth = v[n - i][j];
                    // cout << i << n - j << " " << n - i << j;
                }
                else
                {

                    third = v[n - j][i];
                    fourth = v[j][n - i];
                    // cout << j << n - i << " " << n - j << i;
                }
                // cout << endl;

                int ones = 0;
                ones += first - '0';
                ones += second - '0';
                ones += third - '0';
                ones += fourth - '0';

                cnt += min(4 - ones, ones);

                v[i][j] = v[n - i][n - j] = visited;
                (i == j) ? v[i][n - j] = v[n - i][j] = visited : v[j][n - i] = v[n - j][i] = visited;

                // for (int k = 0; k <= n; k++)
                //     cout << v[k] << endl;
            }
        }
    }

    cout << cnt << endl;
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