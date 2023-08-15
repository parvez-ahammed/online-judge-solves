#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{

    ll n;
    cin >> n;
    vector<ll> v;
    map<int, int> mp;

    mp[1]++;

    v.push_back(1);
    for (int i = 2; i <= n; i++)
    {
        if (mp.count(i) == 0)
        {
            v.push_back(i);
            mp[i]++;
        }

        int j = 1;
        while (i * (1 << j) <= n and mp.count(i * (1 << j)) == 0)
        {

            v.push_back(i * (1 << j));
            mp[i * (1 << j)]++;
            j++;
        }
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    cout << endl;

    set<int> s;

    for (int i = 0; i < n - 1; i++)
    {
        s.insert(__gcd(v[i], v[i + 1]));
    }

    cout << s.size() << endl;
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