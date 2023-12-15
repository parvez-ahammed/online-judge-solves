#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> divs;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divs.push_back(i);
            if (i != n / i) {
                divs.push_back(n / i);
            }
        }
    }
    int ans = 0;

    sort(divs.begin(), divs.end());

    int xLimit = upper_bound(divs.begin(), divs.end(), a) - divs.begin();
    int yLimit = upper_bound(divs.begin(), divs.end(), b) - divs.begin();
    for (int i = 0; i < xLimit; i++) {
        int x = divs[i];

        for (int j = 0; j < yLimit; j++) {
            int y = divs[j];

            if (n % (1LL * x * y) == 0) {
                int z = n / (x * y);
                if (z <= c) {
                    ++ans;
                }
            }
        }
    }
    cout << ans << '\n';
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