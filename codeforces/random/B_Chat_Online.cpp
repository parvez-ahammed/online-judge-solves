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
    int p, q, l, r;
    cin >> p >> q >> l >> r;

    map<int, int> mp;

    for (int i = 0; i < p; i++)
    {
        int a, b;
        cin >> a >> b;

        for (int j = a; j <= b; j++)
            mp[j] = 1;
    }

    set<int> s;

    for (int i = 0; i < q; i++)
    {
        int c, d;
        cin >> c >> d;

        for (int i = l; i <= r; i++)
        {
            for (int j = c + i; j <= d + i; j++)
                if (mp.count(j) != 0)
                {

                    s.insert(i);
                }
        }
    }

    cout << s.size() << endl;
    return 0;
}
