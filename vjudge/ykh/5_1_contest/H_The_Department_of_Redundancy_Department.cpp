#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    unordered_map<int, int> mp;
    vector<int> v;
    while (cin >> n)
    {
        if (mp.count(n) == 0)
            v.push_back(n);
        mp[n]++;
    }

    rep(0, v.size()) cout << v[i] << " " << mp[v[i]] << endl;
    
    return 0;
}