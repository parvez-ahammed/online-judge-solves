#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll sum = 0, n, k;

    cin >> n >> k;

    vector<ll> v(n + 1, 0);

    for (ll i = 1; i <= n; i++) {
        cin >> v[i];
    }

    int r = 1;

       ll cnt = 0;

    for (int i = 1; i <= n; i++) {

        while (r <= n) {

            if (sum >= k) {
                break;
            }
            sum += v[r];
            r++;
        }

        if (sum >= k) {
            cnt += (n - r + 2);
        }

        sum -= v[i];
    }

    cout << cnt << endl;

    return 0;
}