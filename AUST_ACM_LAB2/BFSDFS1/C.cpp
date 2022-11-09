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
int fx[] = {+0, +0, +1, -1};
int fy[] = {-1, +1, +0, +0};

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

    showVector(vv);

    cout << isValid(-1, -1, row, col) << endl;

    // cout << src_x << src_y << " " << des_x << des_y << endl;
    cout << endl;
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