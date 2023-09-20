#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first or (a.first == b.first and a.second < b.second);
}


void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.rbegin(), v.rend(), cmp);

    for (int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << endl;
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