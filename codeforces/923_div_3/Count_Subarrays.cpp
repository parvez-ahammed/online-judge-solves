#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = a[0];
    int left = 0;

    vector<int> ans(n + 1, 1);

    for (int i = 1; i < n; i++) {
        sum += a[i];

        while (sum > n)
            sum -= a[left++];
        
        int right = left;
        int temp = sum;

        while (i - right) {
            ans[temp]++;
            temp -= a[right++];
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
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