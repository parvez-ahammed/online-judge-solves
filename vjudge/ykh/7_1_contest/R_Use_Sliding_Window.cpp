#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;

    cin >> n >> k;

    vector<ll> v(n + 1, 0);

    map<int, vector<int>> mp;

    for (ll i = 1; i <= n; i++) {
        cin >> v[i];
    }
    int sum = 0;
    int mn = INT32_MAX;
    int prev = INT32_MAX;
    for (int i = 1; i <= n; i++) {

        sum += v[i];

        if (i >= k) {

            //cout << sum << " ";

            if (sum <= prev) {
                mn = i - k + 1;
                prev = sum;
            }
            
            sum -= v[i - k + 1];
        };
    }
    cout  << mn << endl;

    return 0;
}