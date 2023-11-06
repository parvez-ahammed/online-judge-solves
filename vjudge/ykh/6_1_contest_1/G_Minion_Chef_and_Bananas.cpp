#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 1e5 + 9;
int n, h;

vector<int> v(N);

bool ok(int k)
{
    int time = 0;
    for (int i = 1; i <= n; i++) {

        if (time > h)
            return false;

        time += (v[i] + k - 1) / k;
    }
    return time <= h;
}

int bs()
{
    int l = 1, r = 1e9 + 9, ans = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return ans;
}

void solve()
{

    cin >> n >> h;

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    cout << bs() << endl;
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