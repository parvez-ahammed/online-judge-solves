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

int solve()
{
    int n;
    cin >> n;
    vector<priority_queue<pair<int, int>>> vpq(n + 2);

    int src = 0, des = 0, weight = 0;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> src >> des >> weight;
        vpq[src].push(make_pair(-weight, des));
        vpq[des].push(make_pair(-weight, src));
    }

    int visited = 0;
    int cost = 0;

    vector<int> color(n + 1, 0);
    color[1] = 1;

    int i = 0;
    src = 1;

    while (visited != n)
    { 

        cout << src << "->" << vpq[src].top().second << " cost " << vpq[src].top().first * -1 << " Vis " << visited << endl;
        int prev_src = src;
        src = vpq[src].top().second;
        cost += vpq[src].top().first * -1;
        vpq[prev_src].pop();

        if (color[src] == 0)
        {
            color[src] = 1;
            visited = count(color.begin(), color.end(), 1);
        }

        i++;
        if (i == 10)
            break;
    }

    return cost;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    int i = 1;
    while (tc--)
    {
        int path_cost = solve();

        cout << "Case " << i << ": " << path_cost << endl;
        i++;
    }
    return 0;
}
