#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    int n, k;
    string str;
    cin >> n >> k >> str;

    map<int, int> mp;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val = str[i] - 'a';

        if (mp.count(val) == 0)
            v.push_back(val);

        mp[val] = val;
    }

    int less_than_k = INT_MIN;
    int hold = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= k)
            less_than_k = max(v[i], less_than_k);
        else
        {
            hold = i;
            break;
        }
    }

    if (less_than_k != INT_MIN)
        k -= less_than_k;

    int cmp = v[hold];
    mp[v[hold]] = v[hold] - k;
    int replace = mp[v[hold]];
    k = 0;

    for (int i = 0; i < v.size(); i++)
    {

        if (v[i] <= less_than_k)
        {
            mp[v[i]] = 0;
            v[i] = 0;
        }
        else if (v[i] <= cmp && mp[v[i]] > replace)

        {
            mp[v[i]] = replace;
            v[i] = replace;
        }
    }

    for (int i = 0; i < str.size(); i++)
    {
        int val = str[i] - 'a';
        cout << (char)('a' + mp[val]);
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