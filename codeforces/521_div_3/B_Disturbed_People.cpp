#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    vector<pair<int, int>> ans;

    map <int , int > mp;

    for (int i = 2; i < n; i++) {
        if (v[i] == 0 and v[i - 1] == 1 and v[i + 1] == 1 and mp[i+1] == 0 and mp[i-1] == 0) {
            ans.push_back({ i - 1, i + 1 });
            mp [i-1]++;
            mp [i+1]++;
        }
    }

    // print the ans vector

    cout << ans.size() << endl;

    
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}