#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int x, y, k;
    cin >> x >> y >> k;

    vector<pair<int, int>> ans;

    int xk = x * k;
    int yk = y * k;
    int actualK = k;

    if (k % 2 == 0) {
        ans.push_back({ 0, 0 });
        k--;
    }

    k--;
    int val = 1e8;
    if (k > 0) {
        for (int i = 1; i <= k / 2; i++) {
            ans.push_back({ -val, -val });
            ans.push_back({ val, val });
            val--;
        }
    }

    if (xk != 0 || yk != 0) {
        ans.push_back({ xk, yk });
    } else {
        if (actualK % 2 == 1) {
            ans.push_back({ 0, 0 });
        } else {
            ans.push_back({ val, val });
        ans[0] = { -val, -val };
        }
       
    }

    for (auto i : ans) {
        cout << i.first << " " << i.second << endl;
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