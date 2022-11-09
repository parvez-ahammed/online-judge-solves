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

void showVector(vector<vector<int>> vv)
{
    for (int i = 0; i < vv.size(); i++)
    {
        for (int j = 0; j < vv[i].size(); j++)
            cout << vv[i][j] << " ";
        cout << endl;
    }
}

void solve(int n)
{
    int l;
    cin >> l;

    vector<vector<int>> vv(n, vector<int>(1, 0));

    int source = 0, des = 0;

    for (int i = 0; i < l; i++)
    {
        cin >> source >> des;
        vv[source].push_back(des);
        vv[des].push_back(source);
    }
    queue<int> q;
    vector<char> color(n, 'W');
    int src = 0;
    color[src] = 'R';
    q.push(src);

    while (!q.empty())
    {
        int src_node = q.front();
        q.pop();

        for (int adj = 1; adj < vv[src_node].size(); adj++)
        {
            int adj_node = vv[src_node][adj];
            if (color[adj_node] == 'W')
            {
                color[adj_node] = (color[src_node] == 'R') ? 'B' : 'R';
                q.push(adj_node);
            }
            else
            {
                if (color[adj_node] == color[src_node])
                {
                    cout << "NOT BICOLORABLE." << endl;
                    return;
                }
            }
        }
    }
    cout << "BICOLORABLE." << endl;
    return;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 0;

    while (cin >> n)
    {
        if (n == 0)
            break;
        else
            solve(n);
    }
    return 0;
}