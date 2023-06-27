// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1594

#include <bits/stdc++.h>
using namespace std;
int R, C;

int dr[] = {-1, 0, 1, 0};
int dc[] = {0, 1, 0, -1};
struct Position
{
    int r, c;
};
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

    Position start, end;
    cin >> start.r >> start.c >> end.r >> end.c;

    vector<vector<int>> visited(adj.size(), vector<int>(adj[0].size(), 0));

    queue<Position> q;
    q.push(start);

    while (!q.empty())
    {
        Position curr = q.front();
        int cost = visited[curr.r][curr.c] + 1;

        q.pop();

        for (int i = 0; i <= 3; i++)
        {
            int adj_r = curr.r + dr[i];
            int adj_c = curr.c + dc[i];

            if (isValid(adj_r, adj_c))
            {
                if (visited[adj_r][adj_c] == 0 && adj[adj_r][adj_c] == 0)
                {
                    visited[adj_r][adj_c] = cost;

                    if (adj_r == end.r && adj_c == end.c)
                        return visited[adj_r][adj_c];

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