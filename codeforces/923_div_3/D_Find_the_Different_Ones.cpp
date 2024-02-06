#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool allfill(vector<int>& a, int l, int r)
{
    int leftInd = lower_bound(a.begin(), a.end(), l) - a.begin();
    int rightInd = upper_bound(a.begin(), a.end(), r) - a.begin();
    int cnt = rightInd - leftInd;
    int totalElements = r - l + 1;

    return cnt == totalElements;
}

int findMissingValueInRange(vector<int>& a, int l, int r)
{

    int left = l, right = r;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (allfill(a, l, mid)) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return left;
}
void solve()
{

    int n;
    cin >> n;
    vector<int> a(n + 5);
    map<int, vector<int>> mp;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }

    int q;
    cin >> q;

    int num = 1;
    while (q--) {
        int l, r;
        cin >> l >> r;

        int val = a[l];

        if (allfill(mp[val], l, r)) {
            cout << "-1 -1" << endl;
        } else {

            int ans = findMissingValueInRange(mp[val], l, r);
            cout << l << " " << ans << endl;
        }
    }

    cout << endl;
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