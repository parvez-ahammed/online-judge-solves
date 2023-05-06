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

int n, m;
int iterativeMax(vector<vector<int>> &grid)
{
    int ans = 0;

    int r = grid.size(), c = grid[0].size();

    vector<vector<bool>> vis(r, vector <bool>(c, false));

    int dir_x[] = {0, 0, 1, -1};
    int dir_y[] = {1, -1, 0, 0};

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] == 0 || vis[i][j] || grid[i][j] == -1)
                continue;

            queue<pair<int, int>> q;

         

            int island = 0;

            q.push({i, j});

            vis[i][j] = true;

            while (!q.empty())
            {
                auto front = q.front();
                q.pop();
           
                island+=grid[front.first][front.second];
                for (int d = 0; d < 4; d++)
                {
                    int qr = front.first + dir_x[d];
                    int qc = front.second + dir_y[d];
                    if (qr < 0 || qr >= r || qc < 0 || qc >= c)
                    {
                        continue;
                    }
                    if (grid[qr][qc] == 0)
                        continue;
                    if (vis[qr][qc])
                        continue;
                    q.push({qr, qc});
                    vis[qr][qc] = true;
                }
            }
            ans = max(ans, island);
        }
    }
    return ans;
}

void solve()
{

    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));

    // checked nothint
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            grid[i][j] = x;
        }
    }

    cout << iterativeMax(grid) << endl;

  
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