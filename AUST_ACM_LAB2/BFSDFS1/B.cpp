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

int cn = 1;

int getNodeVisited(int node, int ttl, vector<vector<int>> vv)
{
    queue<pair<int, int>> q;

    vector<int> color(vv.size(), 0);
    int src = node;
    color[src] = -1;
    q.push(make_pair(src, ttl));

    int counter_var = 1;

    while (!q.empty())
    {
        int src_node = q.front().first;
        int src_ttl = q.front().second;

        q.pop();
        if (src_ttl == 0)
            return counter_var;
        for (int adj = 1; adj < vv[src_node].size(); adj++)
        {

            int adj_node = vv[src_node][adj];
            if (color[adj_node] == 0)
            {
                counter_var++;
                color[adj_node] = 1;
                q.push(make_pair(adj_node, src_ttl - 1));
            }
        }
        vv[src_node][0] = 1;
    }
    return counter_var;
}

void solve(int n)
{
    vector<vector<int>> vv(1000000, vector<int>(1, 0));

    int source = 0, des = 0;
    set<int> ss;

    for (int i = 0; i < n; i++)
    {
        cin >> source >> des;
        vv[source].push_back(des);
        vv[des].push_back(source);
        ss.insert(source);
        ss.insert(des);
    }

    int node = 0, ttl = 0;
    int node_visited = 0;

    while (cin >> node >> ttl)
    {
        if (node == 0 and ttl == 0)
            break;
        else
        {

            node_visited = getNodeVisited(node, ttl, vv);

            cout << "Case " << cn << ": " << ss.size() - node_visited << " nodes not reachable from node " << node << " with TTL = " << ttl << "." << endl;
            cn++;
        }
    }
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