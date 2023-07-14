#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> v(k + 1, 0);
    map<int, int> mp;

    rep(1, k + 1) cin >> v[i], mp[v[i]]++;
    
    ll cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mp[i] == 1)
            cnt += n + 1 - i;
        
        else
        {
            int first_safe = upper_bound(v.begin(), v.end(), i) - v.begin();
            if (first_safe <= k)
                cnt += n+ 1 - v[first_safe];
            
        }
    }

    cout << cnt << endl;

    return 0;
}