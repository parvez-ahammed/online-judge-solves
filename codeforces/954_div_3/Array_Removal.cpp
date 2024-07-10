#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n;
    cin >> n;

    vector<int> a(n, 0);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int ans = INT_MAX;
    for (int x = 0; x <= 31; x++) {
        long long int val = (1ll << x) - 1;

        int bitOr = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > val)
                break;
            bitOr |= a[i];
            cnt++;
        }
        if (bitOr == val) {
            ans = min(ans, n - cnt);
        }
    }

    cout << ans << endl;
}

int32_t
main()
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