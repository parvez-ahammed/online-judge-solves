// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1594

#include <bits/stdc++.h>
using namespace std;
int R, C;

int dr[] = {-1, 0, 1, 0};
int dc[] = {0, 1, 0, -1};
void printVector(vector<vector<int>> vec, int r, int c)
{
    for (int i = 0; i <= r; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}

bool isValid(int r, int c)
{
    return r >= 0 && c >= 0 && r < R && c < C;
}

int bfs(vector<vector<int>> adj)
{

    int sr, sc, er, ec;
    cin >> sr >> sc >> er >> ec;

    vector<vector<int>> visited(adj.size(), vector<int>(adj[0].size(), 0));

    queue<pair<int, int>> q;
    q.push({sr, sc});

    visited[sr][sc] = 1;

    while (!q.empty())
    {
        sr = q.front().first;
        sc = q.front().second;
        int cost = visited[sr][sc] + 1;

        q.pop();

        for (int i = 0; i <= 3; i++)
        {
            int adj_r = sr + dr[i];
            int adj_c = sc + dc[i];

            if (isValid(adj_r, adj_c))
            {
                if (visited[adj_r][adj_c] == 0 && adj[adj_r][adj_c] == 0)
                {
                    visited[adj_r][adj_c] = cost;

                    if (adj_r == er && adj_c == ec)
                        return visited[sr][sc];

                    q.push({adj_r, adj_c});
                }
            }
        }
    }
}

int main()
{

    while (cin >> R >> C)
    {
        if (R == 0 && C == 0)
            break;

        vector<vector<int>> adj(R, vector<int>(C));

        int bomb_r;
        cin >> bomb_r;

        while (bomb_r--)
        {
            int br, bn, bc;
            cin >> br >> bn;

            while (bn--)
            {
                cin >> bc;
                adj[br][bc] = 1;
            }
        }

        cout << bfs(adj) << endl;
    }
}
