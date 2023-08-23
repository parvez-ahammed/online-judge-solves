#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> se;

    int q;
    cin >> q;
    while (q--)
    {
        int op, num;
        cin >> op >> num;

        switch (op)
        {
        case 1:
            se.insert(num);
            break;
        case 2:
            se.erase(num);
            break;
        case 3:
            (se.find(num) != se.end())
                ? cout << "Yes" << endl
                : cout << "No" << endl;
            break;

        default:
            break;
        }
    }
    return 0;
}