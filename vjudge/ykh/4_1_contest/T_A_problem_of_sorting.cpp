#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, string>> v(n);

    rep(0, n) cin >> v[i].second >> v[i].first;

    sort(v.begin(), v.end() );
    reverse(v.begin() , v.end());
    rep(0, n) cout << v[i].second << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}