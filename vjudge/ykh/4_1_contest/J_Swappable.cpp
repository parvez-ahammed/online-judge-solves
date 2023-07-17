#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int, int> mp;

    int n;
    cin >> n;
    ll cnt = 0;
    int x;
   

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        cnt += (mp.count(x) == 0 ? (i - 1) : (i - mp[x] - 1));
        mp[x]++;
    }

    cout << cnt << endl;
    return 0;
}