#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n + 1), prefix(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++) {
        prefix[i] = (prefix[i - 1] + v[i] ) % n;
        prefix[i] = (prefix[i] + n) % n;

    }

    map<int, int> mp;
    ll cnt = 0;
    mp[0]++;

    for (int i = 1; i <= n; i++) {
        cnt += mp[prefix[i]];
        mp[prefix[i]]++;
    }

    cout << cnt << endl;

    return 0;
}