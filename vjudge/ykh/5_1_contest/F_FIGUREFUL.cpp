#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int code_num;
    cin >> code_num;

    map<pair<int, int>, string> mp;

    while (code_num--)
    {
        int x, y;
        string name;
        cin >> x >> y >> name;

        mp[{x, y}] = name;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << mp[{x, y}] << endl;
    }
    return 0;
}