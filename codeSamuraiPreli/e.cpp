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

bool dfs(int x, int y, vector<vector<int>> vv, int nodes)
{

    stack<pair<int, int>> s;

    // cout << "VV SIZE is " << vv.size() << endl; 

    vector<int> vis(nodes + 1, 0);

    s.push(make_pair(x, y));

    while (!s.empty())
    {
        int xx = s.top().first;
        int yy = s.top().second;

        vis[xx] = 1;
        s.pop();

        for (int i = 1; i < vv[i].size(); i++)
        {
            if (vv[xx][i] == 1)
            {
                vv[xx][i] = 0;

                // cout << "PUShing " << i << xx << endl;
                s.push(make_pair(i, xx));
            }
        }
    }
    // cout << "HELLO" << endl;
    for (int i = 1; i <= nodes; i++)
    {

        if (vis[i] == 0)
            return false;
        // cout << vis[i] << " ";
    }
    // cout << endl;
    return true;
}

void solve()
{

    int nodes;
    int edge;
    cin >> nodes >> edge;

    vector<vector<int>> vv(nodes + 1, vector<int>(nodes + 1, 1));
    vector<int> visited(nodes + 1, nodes - 1);

    for (int i = 1; i <= nodes; i++)
        for (int j = 1; j <= nodes; j++)
        {
            if (i == j)
                vv[i][j] = 0;
        }

    int src = 0, des = 0;

    for (int i = 0; i < edge; i++)
    {
        cin >> src >> des;
        vv[src][des] = 0;
        vv[des][src] = 0;
    }

    int start_x = -1, start_y = 0;

    for (int i = 1; i <= nodes; i++)
    {
        for (int j = 1; j <= nodes; j++)
        {
            // cout << vv[i][j] << " ";

            if (vv[i][j] == 1)
            {
                start_x = i;
                start_y = j;
                break;
            }
        }

        if (start_x != -1)
            break;

        cout << endl;
    }

    // cout << start_x << start_y;

    bool possible = dfs(start_x, start_y, vv, nodes);

    possible ? cout << "YES" << endl : cout << "NO" << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;

    while (tc--)
    {
        solve();
    }
    return 0;
}