#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int32_t main()
{

    FAST;
    int query;
    cin >> query;

    stack<int> s;

    while (query--)

    {
        int type;

        cin >> type;

        if (type == 3 and !s.empty())
        {
            cout << s.top() << endl;
        }
        if (type == 2 and !s.empty())
        {
            s.pop();
        }
        if (type == 1)
        {
            int id;
            cin >> id;
            s.push(id);
        }
    }

    return 0;
}