#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<string> a(n);

    vector<int> ans;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] == '#') {
                ans.push_back(j+1);
            }
        }
    }

    reverse(ans.begin(), ans.end());

    for (auto x : ans) {
        cout << x << " ";
    }

    cout << endl;
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