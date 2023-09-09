#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n, m, k;
    string a, b;
    cin >> n >> m >> k >> a >> b;

    map<char, set<char>> mp;

    for (int i = k - 1; i < n; i++)
        mp[a[i]].insert(a[i - k + 1]);

    ll cnt = 0;

    map <char, int> freq;

    for (int i = 0; i < m; i++) {
        freq[b[i]]++;

        for (auto x : mp[b[i]]) {
            cnt += freq[x];
        }
    }
    cout << cnt << endl;
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