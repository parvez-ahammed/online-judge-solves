#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<int> v;
int N, T;

bool ok(ll mid)
{
    ll cnt = 0;

    for (int i = 0; i < N; i++) {

        if (cnt >= T)
            return true;
        cnt += mid / v[i];
    }

    return cnt >= T;
}

ll binSearch()
{
    ll l = 0, r = 1e18 + 7, mid, ans = 0;

    while (l <= r) {
        mid = (l + r) / 2;

        // cout << l << " " << mid << " " << r << endl;

        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return ans;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> T;

    v.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << binSearch() << endl;
    return 0;
}