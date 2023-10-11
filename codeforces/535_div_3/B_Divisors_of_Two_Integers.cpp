#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        cin >> v[i], mp[v[i]]++;
    sort(v.begin(), v.end());

    int fir = v[n - 1];

    for (int i = 1; i * i <= fir; i++) {
        if (fir % i == 0) {
            mp[i]--;
            if (fir / i != i)
                mp[fir / i]--;
        }
    }

    int sec = 0;

    for (auto i : mp)
        if (i.second > 0)
            sec = max(sec, i.first);

    cout << fir << " " << sec << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}