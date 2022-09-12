
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m, k;

    cin >> n >> m >> k;
    set<int> e;

    vector<int> e;
    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        e.push_back(temp);
    }
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    sort(e.begin(), e.end());
    for (int i = 0; i < n; i++)
        cout << e[i];
    

    return 0;
}
