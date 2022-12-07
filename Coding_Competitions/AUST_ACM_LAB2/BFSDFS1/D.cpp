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
int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[] = {-1, 1, 1, -1, 2, -2, 2, -2};

int getX(string str)
{
    return str[1] - '0';
}
int getY(string str)
{
    return (int)str[0] - (int)'a';
}
bool isValid(int x, int y, int row, int col)
{
    return x >= 0 && y >= 0 && x < row && y < col;
}

void solve(string src, string des)
{
    vector<vector<int>> vv(8, vector<int>(8, 0));
    vector<vector<int>> pp = vv;
    int src_x = getX(src) - 1, src_y = getY(src), des_x = getX(des) - 1, des_y = getY(des);

    queue<pair<int, pair<int, int>>> s;
    s.push(make_pair(0, make_pair(src_x, src_y)));
    int final_cost = 0;
    pp[src_x][src_y] = 1;

    while (!s.empty())
    {
        int current_cost = s.front().first;
        int current_x = s.front().second.first;
        int current_y = s.front().second.second;
        s.pop();

        // cout << "FOR SOURCE   " << current_x << current_y << "   VALID ADJ ARE "<< "WTITH COST " << current_cost << endl;

        if (current_x == des_x && current_y == des_y)
        {
            final_cost = current_cost;
            // cout << "BREAK" << endl;
            break;
        }

        for (int i = 0; i < 8; i++)
        {
            int adj_x = current_x + dx[i];
            int adj_y = current_y + dy[i];

            // cout << "ADJ VALUE IS " << adj_x << adj_y << endl;

            if (isValid(adj_x, adj_y, 8, 8))
            {
                // cout << "PP VALUE IS " << pp[adj_x][adj_y] << "   " << adj_x << adj_y << endl;

                if (pp[adj_x][adj_y] == 0)
                {

                    s.push(make_pair(current_cost + 1, make_pair(adj_x, adj_y)));
                    pp[adj_x][adj_y] = 1;
                }
            }
        }

        // cout << endl;
    }
    cout << "To get from " << src << " to " << des << " takes " << final_cost << " knight moves." << endl;
}

int32_t main()
{
    
    string line;
    string src = "", des = "";
    while (cin >> src >> des)
    {
        solve(src, des);
    }

    return 0;
}