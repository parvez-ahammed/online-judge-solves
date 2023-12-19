#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> a(n + 1), b(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }

    vector<pair<int, int>> res , ans;

    for (int i = 1; i <= n; i++) {
        res.push_back({ a[i], b[i] });
    }

    sort(res.rbegin(), res.rend());

    for (int i =1 ; i <= n ; i++)
    {   
       

    }

    
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}