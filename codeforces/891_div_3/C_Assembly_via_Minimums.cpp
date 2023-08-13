#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int sizeN = ((n * (n - 1)) / 2);
    vector<int> v(sizeN);

    set<int> s;

    map<int, int> mp;

    for (int i = 0; i < sizeN; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        s.insert(v[i]);
    }

      if (s.size() == 1)
    {
        for (int i = 0; i < n; i++)
            cout << v[0] << " ";
    }
    else
    {
        int count = n - 1;

        int hold = 0;

        for (auto elem : s)
        {

            while (mp[elem] > 0)
            {
                cout << elem << " ";
                hold = elem;
                mp[elem] -= count;
                count--;
            }
        }

        cout << hold;
    }

    cout << endl;
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}