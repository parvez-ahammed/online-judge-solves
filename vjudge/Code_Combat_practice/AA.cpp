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

bool isValid(int x, int y, int row, int col)
{
    return x >= 0 && y >= 0 && x < row && y < col;
}

vector<vector<int>> dfs(vector<vector<int>> &grid, int sr, int sc)
{

    vector<vector<int>> colored(grid.size(), vector<int>(grid[0].size(), 0));
    colored[sr][sc] = 1;

    stack<pair<int, int>> q;
    q.push(make_pair(sr, sc));

    int dx[] = {+0, +0, +1, -1};
    int dy[] = {-1, +1, +0, +0};

    int current_area = 1;

    while (!q.empty())
    {
        int current_x = q.top().first;
        int current_y = q.top().second;
        // cout << "HITTED" << current_x  << " " << current_y <<endl;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int adj_x = current_x + dx[i];
            int adj_y = current_y + dy[i];

            if (isValid(adj_x, adj_y, grid.size(), grid[0].size()))
            {
                if (grid[adj_x][adj_y] == 1 && colored[adj_x][adj_y] == 0)
                {
                    q.push(make_pair(adj_x, adj_y));
                    grid[adj_x][adj_y] = 2;
                    colored[adj_x][adj_y] = 1;
                    current_area++;
                }
            }
        }
    }

    return grid;
}

void solve()
{
    vector<vector<int>> vv;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        for (int j = 0; j < m; j++)
        {

            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        vv.push_back(v);
    }
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