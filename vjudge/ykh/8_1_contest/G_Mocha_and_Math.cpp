#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

#define CheckBit(x, k) ((x >> k) & 1)
void solve()
{

    int n;
    cin >> n;

    int arr[n];


    map <int,int> mp ;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        for (int j = 0; j < 31; j++) {
            if (CheckBit(arr[i], j)) {
                mp[j]++;
            }
        }
    }

    int ans = 0;

    for (int i = 0 ; i < 31 ; i++) {
        if (mp[i] == n) {
            ans += (1 << i);
        }
    }

    cout << ans << endl;
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