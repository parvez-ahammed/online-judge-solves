
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int temp;
    set<int> final_set;
    for (int i = 0; i < n + m; i++)
    {
        cin >> temp;
        final_set.insert(temp);
    }

    int i = 0;
    for (auto it = final_set.begin(); it != final_set.end(); ++it)
    {
        if (i == 0)
        {
            cout << *it;
        }
        else
            cout << ' ' << *it;
            i++;
    }

    cout << endl;
    return 0;
}