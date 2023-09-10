#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


void solve()
{

    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> v(m);

    map<pair<int, int>, int> mp;

    for (int i = 0; i < m; i++) {
        cin >> v[i].second >> v[i].first;
        mp[v[i]] = (i + 1);
    }

    sort(v.begin(), v.end());

    int sum = 0;

    vector<pair<int, int>> temp;

    for (int i = 0; i < 2 * n; i++) {
        

        temp.push_back({ v[i].second, v[i].first });

        sum += v[i].first;
    }

    sort(temp.begin(), temp.end());
    cout << sum << endl;

    int sz = temp.size();
    for (int i = 0; i < n; i++) {


        cout << mp[{ temp[i].second, temp[i].first }] << " ";
        cout << mp[{ temp[sz-i-1].second, temp[sz-i-1].first }] << endl;
      
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
