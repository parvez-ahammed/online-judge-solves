#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int N;

const int MAXN = 200000 + 5;
vector<int> arr(MAXN);
// took help from the tutorial
ll inverSionCount(int l, int r)
{

    if (l >= r)
        return 0;

    int mid = (l + r) >> 1;
    ll ans = inverSionCount(l, mid);
    ans += inverSionCount(mid + 1, r);

    vector<int> temp;

    temp.insert(temp.end(), arr.begin() + mid + 1, arr.begin() + r + 1);

    sort(temp.begin(), temp.end());
    for (int i = l; i <= mid; i++) {
        ans += (lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin());
    }
    return ans;
}
void solve()
{

    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }

    // print the array

    cout << inverSionCount(1, N) << endl;
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