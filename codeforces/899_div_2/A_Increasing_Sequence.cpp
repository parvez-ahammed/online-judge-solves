#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1), ans;

    int b = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b++;
        if (a[i] == b)
            b++;

        ans.push_back(b);
    }

    cout << ans.back() << endl;
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