#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 1e5 + 5;
int q;
int n, m;
vector<int> queries;
int oneNeeded = 0;
vector<pair<int, int>> v(N);
bool validExists(int queryNumber)
{

    vector<int> arr(N, 0), prefix(N, 0);

    for (int i = 1; i <= queryNumber; i++) {
        arr[queries[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }


    for (int i = 1; i <= m; i++) {

        int l = v[i].first;
        int r = v[i].second;
        int len = r - l + 1;
        int ones = prefix[r] - prefix[l - 1];
        int zeros = len - ones;

        if (ones > zeros) {
            return true;
        }
    }

    return false;
}

int binarySearch()
{
    int l = 1, r = q + 1, ans = 0;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (validExists(mid)) {
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

    cin >> n >> m;
    queries.clear();
    v.clear();
    queries.resize(n + 5);

    for (int i = 1; i <= m; i++) {
        cin >> v[i].first >> v[i].second;
    }

    cin >> q;

    int queryNum = 1;
    for (int i = 1; i <= q; i++) {
        cin >> queries[i];
    }

    bool valid = validExists(q);
    if (!valid)
        cout << -1 << endl;
    else {
        cout << binarySearch() << endl;
    }
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
