#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<unsigned long long int> v;
    unsigned long long int tc = 0;
    cin >> tc;
    int last = 0;
    for (int i = 1; i <= sqrt(tc); i++)
        if (tc % i == 0)
        {
            v.insert(i);
            v.insert(tc / i);
        }
    int count = 1;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        if (count != v.size())
            cout << *it << " ";
        else
            cout << *it;
        count++;
    }

    cout << endl;

    return 0;
}
