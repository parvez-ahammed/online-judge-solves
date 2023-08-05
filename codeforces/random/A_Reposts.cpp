#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

map<string, int> mp;
map<int, int> childs;
int id = 0;

int dsu(int parent)
{

    if (childs[parent] == 0)
        return 1;

    return 1 + dsu(childs[parent]);
}

int processName(string name)
{
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    if (mp.count(name) == 0)
    {
        ++id;
        mp[name] = id;
    }

    return mp[name];
}

int32_t main()
{

    FAST;

    int n;
    cin >> n;
    string name1, name2;

    vector<bool> isChild(210);
    for (int i = 0; i < n; i++)
    {
        cin >> name1 >> name2 >> name2;

        int parent = processName(name1);
        int child = processName(name2);

        childs[parent] = child;

        isChild[child] = true;
    }

    int ans = INT_MIN;

    for (int i = 1; i < id + 5; i++)
    {

        if (!isChild[i])
            ans = max(dsu(i), ans);
    }

    cout << ans << endl;

    return 0;
}