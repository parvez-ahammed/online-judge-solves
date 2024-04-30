#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    string s;
    cin >> s;

    s.insert(s.begin(), '#');

    int totalOne = 0;
    for (int i = 1; i < s.size(); i++) {
        totalOne += (s[i] == '1');
    }

    vector<int> oneSum(s.size() + 1, 0);

    for (int i = 1; i <= s.size(); i++) {
        oneSum[i] = oneSum[i - 1] + (s[i] == '1');
    }
    ll cost = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '0' and oneSum[i]) {
            cost += oneSum[i] + 1;
        }
    }

    cout << cost << " " << endl;
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
