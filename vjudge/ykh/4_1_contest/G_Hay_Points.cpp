#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> m >> n;
    map<string, int> mp;
    rep(0, m)
    {
        string str;
        int value;
        cin >> str >> value;
        mp[str] = value;
    }

    for (int i = 0; i < n; i++)
    {

        string str;
        ll salary = 0;
        while (cin >> str && str != ".")
        {

            if (mp.count(str) > 0)
                salary += mp[str];
        }

        cout << salary << endl;
    }
    return 0;
}