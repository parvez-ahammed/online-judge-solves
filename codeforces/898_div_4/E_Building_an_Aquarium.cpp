#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
vector<int> v;
int N, X;

bool ok(int mid)
{
    int cnt = 0;
    for (int i = 0; i < N; i++) {

        if (cnt > X)
            return false;

        cnt += max(0, mid - v[i]);
    }

    return cnt <= X;
}

int binSearch()
{
    int l = 0, r = 2e9 + 7;
    int ans = 0;
    while (l <= r) {
        int mid = l + (r - l) / 2;

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

    cin >> N >> X;

    v.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

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