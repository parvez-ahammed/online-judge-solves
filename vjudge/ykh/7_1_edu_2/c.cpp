#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int A, B;
    int n;
    cin >> n >> A >> B;

    vector<int> p(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    sort(p.begin(), p.end());
    ll ans = 0;

    int r =  n;
    int l = n;

    for (int i = 1; i <= n; i++) {

        while (r > 0) {
            if (p[i] + p[r] <= B) {
                break;
            }
            r--;
        }

        while (l > 0 ) {
            if (p[i] + p[l] < A) {
                break;
            }
            l--;
        }

        int add = max(i, l);

        ans += max(0, r - add);
    }

    // Using binary search

    // for (int i = 1; i <= n; i++) {
    //     int pjMin = A - p[i];
    //     int pjMax = B - p[i];

    //     int l = lower_bound(p.begin(), p.end(), pjMin) - p.begin();

    //     int r = upper_bound(p.begin(), p.end(), pjMax) - p.begin();

    //     if (l <= i)
    //         l = i + 1;

    //     if (r - l >= 0)
    //         ans += (r - l);
    // }

    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;

    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        cout << "Case " << i << ": ";
        solve();
    }

    return 0;
}