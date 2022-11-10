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
int dx[] = {+0, +0, +1, -1};
int dy[] = {-1, +1, +0, +0};



void showVector(vector<vector<int>> vv)
{
    for (int i = 0; i < vv.size(); i++)
    {
        for (int j = 0; j < vv[i].size(); j++)
            cout << vv[i][j] << " ";
        cout << endl;
    }
}

bool isValid(int x, int y, int row, int col)
{
    return x >= 0 && y >= 0 && x < row && y < col;
}

void solve(int row, int col)
{

    vector<vector<int>> vv(row, vector<int>(col, 0));
    vector<vector<int>> pp = vv;

    int number_of_bomb_row = 0;
    cin >> number_of_bomb_row;

    while (number_of_bomb_row--)
    {
        int row_number = 0, bomb_in_row = 0, col_number = 0;

        cin >> row_number >> bomb_in_row;

        while (bomb_in_row--)
        {
            cin >> col_number;
            vv[row_number][col_number] = 1;
        }
    }
    int src_x = 0, src_y = 0, des_x = 0, des_y = 0;
    cin >> src_x >> src_y >> des_x >> des_y;

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

        // cout << "FOR SOURCE   " << current_x << current_y << "   VALID ADJ ARE"   << "WTITH COST " <<  current_cost << endl;

        if (current_x == des_x && current_y == des_y)
        {
            final_cost = current_cost;
            break;
        }

        for (int i = 0; i < 4; i++)
        {
            int adj_x = current_x + dx[i];
            int adj_y = current_y + dy[i];

            //  cout << "ADJ VALUE IS " << adj_x << adj_y << endl;

            if (isValid(adj_x, adj_y, row, col))
            {
                // cout << "PP VALUE IS " << pp[adj_x][adj_y] << "   " << adj_x << adj_y << endl;

                if (vv[adj_x][adj_y] != 1)
                {

                    if (pp[adj_x][adj_y] == 0)
                    {
                        // cout << "ADJ X " << adj_x << " ADJ Y " << adj_y << " COST " << current_cost << endl;
                        s.push(make_pair(current_cost + 1, make_pair(adj_x, adj_y)));
                        pp[adj_x][adj_y] = 1;
                    }
                }
            }
        }
       

        // cout << endl;
    }

    // cout << src_x << src_y << " " << des_x << des_y << endl;

    //  showVector(pp);
    cout << final_cost << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;

    int row = 0, col = 0;
    while (cin >> row >> col)
    {
        if (row != 0 && col != 0)

            solve(row, col);
        else
            break;
    }
    return 0;
}