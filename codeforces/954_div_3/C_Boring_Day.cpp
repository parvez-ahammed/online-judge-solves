#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, l, r;
    cin >> n >> l >> r;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    int sum = 0;

    for (int i = 0; i < arr.size();) {

        while (sum < l and i < arr.size()) {
            if (sum + arr[i] > r) {
                break;
            }
            sum += arr[i];
            i += 1;
        }

        if (l <= sum and sum <= r) {
            cnt += 1;
        }
        
        if (i < arr.size())
            i += (arr[i] > r);

        sum = 0;
    }
    cout << cnt << endl;
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