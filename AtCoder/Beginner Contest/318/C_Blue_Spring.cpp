#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d, p;
    cin >> n >> d >> p;

    vector<int> f(n);

    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }

    sort(f.rbegin(), f.rend());

    int cnt = 0;

    for (int i = 0; i < n; i += d)

    {

        ll sum = 0;

        for (int j = i; j < min(i + d, n); j++) {
            sum += f[j];
        }

        if (sum >= p)
            cnt++;
        else
            break;
    }

    ll ans = cnt * (p * 1ll);

    for (int i = cnt * d; i < n; i++) {
        ans += (f[i] * 1ll);
    }

    cout << ans << endl;

    return 0;
}