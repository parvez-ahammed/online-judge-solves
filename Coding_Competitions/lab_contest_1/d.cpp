
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m, k;

    cin >> n >> m >> k;

    set<long long int> e;
    set<long long int> a;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        e.insert(temp);
    }
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        a.insert(temp);
    }

    int count = 0;
    for (auto it = a.begin(); it != a.end(); ++it)
    {
        for (auto pit = e.begin(); pit != e.end(); ++pit)
        {
            long long int sum = (*pit + *it);
            if (sum % k == 0)
                count++;
        }
    }

    cout << count;

    return 0;
}
