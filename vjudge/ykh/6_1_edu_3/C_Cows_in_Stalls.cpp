#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int N, K;
vector<int> v;

bool ok(int mid)
{
    int last_cow_posititon = v[0];
    int cow_placed = 1;

    for (int i = 1; i < N; i++) {
        if (v[i] - last_cow_posititon >= mid) {
            cow_placed++;
            last_cow_posititon = v[i];
        }
    }

    return cow_placed >= K;
}

int binarySearch()
{
    int ans = 0;

    int l = 0, r = 1e9;

    while (l <= r) {
        int mid = (l + r) / 2;

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
    cin >> N >> K;
    v.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    cout << binarySearch() << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}