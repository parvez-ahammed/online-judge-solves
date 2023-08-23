#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    map<string, int> mp;
    while (q--)
    {
        int op;
        string name;
        cin >> op >> name;

        switch (op)
        {
        case 1:
            int y;
            cin >> y;
            mp[name] += y;

            break;
        case 2:
            mp.erase(name);
            break;
        case 3:
            cout << mp[name] << endl;
            break;

        default:
            break;
        }
    }
    return 0;
}