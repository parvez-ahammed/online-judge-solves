#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int getInverse(int n)
{
    int inverse = ~n;
    inverse = inverse & ((1 << 31) - 1);
    return inverse;
}
void solve()
{

    int n;
    cin >> n;
    vector<int> v(n), inverse(n);

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    int cnt = 0;
    for (auto x : mp) {
        int actualValue = x.first;
        int actualCount = x.second;

        int inverseValue = getInverse(actualValue);

        if (mp.find(inverseValue) == mp.end()) {
            cnt += actualCount;
            mp[actualValue] = 0;
            continue;
        }

        int inverseCount = mp[inverseValue];

        int mn = min(actualCount, inverseCount);

        cnt += mn;

        actualCount -= mn;
        inverseCount -= mn;

        cnt += actualCount;
        cnt += inverseCount;

        mp[actualValue] = 0;
        mp[inverseValue] = 0;
    }

    cout << cnt << endl;
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