#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool check(int a, int b, int c)
{
    int mx = max(a, b);
    int mn = min(a, b);

    return c >= mn and c <= mx;
}
void solve()
{

    int n;
    cin >> n;

    vector<int> a(n), b(n + 1);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n + 1; i++)
        cin >> b[i];
    ll ans = 0;

    int lastNumber = b[n];

    bool lastNumberFound = false;
    for (int i = 0; i < n; i++) {
        int diff = abs(a[i] - b[i]);
        ans += diff;

        if (b[i] == lastNumber or check(a[i], b[i], lastNumber)) {
            lastNumberFound = true;
        }
    }
   
    ans += 1;
    if (!lastNumberFound) {

        int mn = INT_MAX;
        for (int i = 0; i < n; i++) {
            mn = min(mn, abs(a[i] - lastNumber));
            mn = min(mn, abs(b[i] - lastNumber));
        }
        ans += mn;
    }
    cout << ans << endl;
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

// 2 1 4 0