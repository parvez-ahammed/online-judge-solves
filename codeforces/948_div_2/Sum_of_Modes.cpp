#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    string str;
    cin >> str;

    str.insert(0, "#");

    vector<pair<int, int>> v(n + 1, { 0, 0 });

    for (int i = 1; i <= n; i++) {

        if (str[i] == '1') {
            v[i].first = v[i - 1].first + 1;
            v[i].second = v[i - 1].second;
        } else {
            v[i].first = v[i - 1].first;
            v[i].second = v[i - 1].second + 1;
        }
    }

    int ans = 0;

    map<int, int> diff;

    for (int l = 1; l <= n; l++) {
        int differece = v[l].first - v[l].second;
        diff[differece] += 1;
    }
    
    for (int l = 1; l <= n; l++) {
        int differece = v[l].first - v[l].second;
        diff[differece] -= 1;

        ans += 1;
        ans += diff[0] * 2;
        ans += (diff[differece] * 2);
        

    }

    cout << ans << endl;
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