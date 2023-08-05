#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

vector<int> parent[200009];

int des;

void dfs(int root)
{
    int n = parent[root].size();

    cout << root << endl;

    for (int i = 0; i < parent[root].size(); i++)
        dfs(parent[root][i]);
}

int32_t main()
{

    FAST return 0;

    int n, x;


    cin >> n;
    des = n;

    
    for (int i = 2; i <= n; i++)
    {
        cin >> x;

        cout << x << endl;
        parent[x].push_back(i);
    }

    //dfs(1);
}