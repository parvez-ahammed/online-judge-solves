#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int bs(int n, int x, vector<int> a)
{
    int l = 0, r = n, ans = 1;

    while (r - l > 1) {
        int mid = (l + r) / 2;
        if (a[mid] <= x) {
            l = mid;
            ans = l + 1;
        } else {
            r = mid;
        }
    }

    return ans;
}

void solve()
{

    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    int pos = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == x)
            pos = i + 1;
    }

    int ans = bs(n, x, a);

    if (ans == pos) {
        cout << 0 << endl;
        return;
    }

    cout << 1 << endl;
    cout << ans << " " << pos << endl;
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