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



vector<int> nodes;
int cn = 1;
int getIndex(vector<int> nodes, int value)
{
    for (int i = 0; i < nodes.size(); i++)
    {
        if (nodes[i] == value)
            return i;
    }
    return -1;
}

int getNodeVisited(int node, int ttl, vector<vector<int>> vv)
{
    queue<pair<int, int>> q;

    vector<int> color(nodes.size() + 1, 0);
    int src = node;

    int src_index = getIndex(nodes, node);

    color[src_index] = 1;

    q.push(make_pair(src, ttl));

    // cout << "\nPUSHED IN QUES " << q.front().first << " " << q.front().second << endl;

    int node_visited = 1;

    while (!q.empty())
    {
        int src_node = q.front().first;
        int src_ttl = q.front().second;

        // cout << "SRC NODE " << src_node << " TTL " << src_ttl << endl;

        q.pop();
        if (src_ttl == 0)
        {
            return node_visited;
        }

        int src_index = getIndex(nodes, src_node);

        // cout << "\nSOURCE INDEX IS " << src_index << endl;

        for (int adj = 1; adj < vv[src_index].size(); adj++)
        {

            int adj_node = vv[src_index][adj];
            int adj_index = getIndex(nodes, adj_node);

            // cout << "ADJ NODE IS " << adj_node<< " ADJ INDEX IS " << adj_index << " COLORED VALUE IS = " << color[adj_index] << endl;
            if (color[adj_index] == 0)
            {
                node_visited++;
                color[adj_index] = 1;
                q.push(make_pair(adj_node, src_ttl - 1));
            }
        }
    }
    return node_visited;
}

void solve(int n)
{
    vector<vector<int>> vv(1000, vector<int>(1, 0));

    int source = 0, des = 0;

    int count_uni = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> source >> des;

        if (getIndex(nodes, des) == -1)
            nodes.push_back(des);
        if (getIndex(nodes, source) == -1)
            nodes.push_back(source);
        vv[getIndex(nodes, source)].push_back(des);
        vv[getIndex(nodes, des)].push_back(source);
    }

    // for (int i = 0; i < nodes.size(); i++)
    // {

    //     cout << nodes[i] << " ";
    //     vv[i][0] = nodes[i];
    // }

    // cout << "The graph vector" << endl;

    // for (int i = 0; i < nodes.size(); i++)
    // {
    //     for (int j = 0; j < vv[i].size(); j++)
    //     {
    //         cout << vv[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int node = 0, ttl = 0;
    int node_visited = 0;

    while (cin >> node >> ttl)
    {
        if (node == 0 and ttl == 0)
            break;
        else
        {

            node_visited = getNodeVisited(node, ttl, vv);

            cout << "Case " << cn << ": " << nodes.size() - node_visited << " nodes not reachable from node " << node << " with TTL = " << ttl << "." << endl;
            cn++;
        }
    }

    // cout << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 0;

    while (cin >> n)
    {
        vector<int> empty;
        nodes = empty;
        if (n == 0)
            break;
        else
            solve(n);
    }
    return 0;
}