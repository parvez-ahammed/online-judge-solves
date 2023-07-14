
#include "bits/stdc++.h"
using namespace std;
#define ll long long

const ll sz = 500005;

ll a[sz];
ll presum[sz];

bool fun(ll lt, ll rt)
{
    cout << "? " << rt - lt + 1;
    for (ll i = lt; i <= rt; i++)
        cout << " " << i;
        
    cout << endl;
    fflush(stdout);
    ll sum;
    cin >> sum;
    return !(sum == presum[rt] - presum[lt - 1]);
}

ll binarySearch(ll n)
{
    ll left = 1, right = n, mid, ans;
    while (left <= right)
    {
        if (left == right)
        {
            return left;
        }
        mid = (left + right) / 2;
        if (fun(left, mid))
        {
            ans = left;
            right = mid;
        }
        else
            left = mid + 1;
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        presum[i] = presum[i - 1] + a[i];
    }
    ll ans = binarySearch(n);
    cout << "! " << ans << endl;
}

int main()
{

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}