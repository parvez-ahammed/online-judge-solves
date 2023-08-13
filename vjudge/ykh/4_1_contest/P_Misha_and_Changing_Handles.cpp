#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

const int MAX = 100000;
vector<int> adj[MAX];

int findDestination(int root)
{
    int ans = root;

    for (int i = 0; i < adj[root].size(); i++)
        ans = findDestination(adj[root][i]);
    

    return ans;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    int id = 0;
    vector<string> val(MAX);

    map<string, pair<int, int>> occurance;
    map<string, int> id_map;
    string old_name, new_name;

    while (q--)
    {

        cin >> old_name >> new_name;

        if (occurance.count(old_name) == 0)
        {
            ++id;
            id_map[old_name] = id;
            val[id] = old_name;
        }

        if (occurance.count(new_name) == 0)
        {
            ++id;
            id_map[new_name] = id;
            val[id] = new_name;
        }

        occurance[old_name].first++;
        occurance[new_name].second++;

        int source = id_map[old_name];
        int destination = id_map[new_name];

        adj[source].push_back(destination);
    }

    vector<string> roots;
    for (auto p : occurance)
    {
        if (p.second.first == 1 and p.second.second == 0)
            roots.push_back(p.first);
    }

    cout << roots.size() << endl;
    for (auto root : roots)
    {
        int source = id_map[root];
        int destination = findDestination(source);

        cout << val[source] << " " << val[destination] << endl;
    }

    return 0;
}