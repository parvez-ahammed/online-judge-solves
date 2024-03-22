#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int MOD = 1e9 + 7;

ll getMaxSubSum(vector<int> &a)
{
    ll sum = 0;
    ll max_sum = LONG_LONG_MIN;

    for (int i = 0; i < a.size(); i++) {
        sum += a[i];
        max_sum = max(max_sum, sum);
        if (sum < 0) {
            sum = 0;
        }
    }

    if (max_sum < 0) {
        max_sum = *max_element(a.begin(), a.end());
    }

    return max_sum;
}
void solve()
{

    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll arraySum = 0;
    for (int i = 0; i < n; i++) {
        arraySum += a[i];
    }

    ll max_sum = getMaxSubSum(a);
    ll newSum = 0;

    if (max_sum <= 0) {
        newSum = 0;
    } else {

        for (int i = 0; i < k; i++) {
            newSum = (newSum + max_sum) % MOD;
            max_sum = (max_sum * 2LL) % MOD;
        }
    }

    ll ans = (arraySum + newSum) % MOD;

    while (ans < 0) {
        ans += MOD;
    }

    cout << ans % MOD << endl;
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