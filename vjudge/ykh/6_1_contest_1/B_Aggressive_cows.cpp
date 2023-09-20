#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int N, C;
vector<int> v;

bool ok(int mid)
{

    int cnt = 1;

    int sz = v.size();
    int last = v[0];

    for (int i = 1; i < sz; i++) {
        if (v[i] - last >= mid) {
            cnt++;
            last = v[i];
        }
    }

    return cnt >= C;
}

int binSearch()
{
    int ans = 0;

    int l = 0, r = 1e9, mid;

    while (l <= r) {
        mid = (l + r) / 2;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return ans;
}

void solve()
{
    v.clear();

    cin >> N >> C;
    v.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << binSearch() << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}