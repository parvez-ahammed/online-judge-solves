#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 1.5e6 + 5;

struct DS
{

    set<int> s;
    map<int, int> mp;

    DS()
    {
        for (int i = 0; i < N; i++)
            s.insert(i);
    };

    void insert(int x)
    {

        mp[x]++;

        if (mp[x] == 1)
            s.erase(x);
    }

    void remove(int x)
    {

        mp[x]--;

        if (mp[x] == 0)
            s.insert(x);
    }

    int getMex()
    {

        return *s.begin();
    }
};
void solve()
{

    int n, k;
    cin >> n >> k;

    vector<int> v, arr(n + 1);

    for (int i = 1; i <= n; ++i)

        cin >> arr[i];

    DS ds;

    for (int i = 1; i <= n; ++i)
    {
    
        ds.insert(arr[i]);
        if (i >= k)
        {
            v.push_back(ds.getMex());
            ds.remove(arr[i - k + 1]);
        }
    }

    cout << *min_element(v.begin(), v.end()) << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}