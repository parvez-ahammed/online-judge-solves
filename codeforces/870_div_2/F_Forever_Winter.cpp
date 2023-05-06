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

void print_grid(vector<vector<int>> grid, int n, int m)
{
    cout << n << " " << m << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

void solve()
{

    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n + 1, vector<int>(n + 1));

    for (int j = 0; j < m; j++)
    {
        int s, d;

        cin >> s >> d;

        grid[s][d] = 1;
        grid[d][s] = 1;
        grid[s][0] += 1;
        grid[d][0] += 1;
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[grid[i][0]] += 1;
    }

    int X, Y;

    for (auto x : mp)
    {

        if (x.second == 1 && x.first != 0)
        {
            X = x.first;
            break;
        }
    }

    for (auto x : mp)
    {

        if (x.second == X)
        {
            Y = x.first;
            break;
        }
    }

    cout << X << " " << Y - 1 << endl;
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

// 1 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 1 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 4 1 0 0 0 0 0 0 0 0 1 1 0 0 0 1 0 0 0 0 0 0
// 1 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0
// 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0
// 4 0 1 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 1 0 0 0
// 4 0 0 0 0 0 0 0 0 1 0 0 1 0 0 1 0 1 0 0 0 0
// 4 0 0 0 1 0 0 0 0 0 0 0 0 0 1 1 0 0 0 1 0 0
// 1 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 1 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 1 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 1 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0
// 1 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0
// 5 0 0 1 0 0 1 1 1 0 0 0 0 0 0 0 0 0 0 0 1 0
// 1 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 1 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 1 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 1 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0
// 4 0 0 0 0 1 0 0 0 0 0 0 0 1 0 1 0 0 0 0 0 1
// 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0

// 1 0 1 0 0 0 0 0 0 0
// 4 1 0 0 0 1 1 1 0 0
// 4 0 0 0 1 0 1 0 1 1
// 1 0 0 1 0 0 0 0 0 0
// 1 0 1 0 0 0 0 0 0 0
// 2 0 1 1 0 0 0 0 0 0
// 1 0 1 0 0 0 0 0 0 0
// 1 0 0 1 0 0 0 0 0 0
// 1 0 0 1 0 0 0 0 0 0
