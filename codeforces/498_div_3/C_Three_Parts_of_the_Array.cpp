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

    vector<int> v(n);



    for (int i = 0; i < n; i++) {
        cin >> v[i];
  
    }

    vector<ll> prefixSum(n + 1, 0), suffixSum(n + 1, 0);
    map<ll, int> mp;

    for (int i = 1; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + v[i - 1];
        mp[prefixSum[i]] = i - 1;
    }

    for (int i = n - 1; i >= 0; i--) {
        suffixSum[i] = suffixSum[i + 1] + v[i];
    }



    ll ans = 0;

    

    for (int i = 0; i <= n; i++) {

        if (mp.count(suffixSum[i])) {

            if (mp[suffixSum[i]] < i) {

                ans = max(ans, suffixSum[i]);
            }
        }
    }

    cout << ans << endl;

    return 0;
}