#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;

    cin >> n;

    deque<int> dq;

    for (int i = 1; i <= n; i++) {

        if (i & 1) {
            dq.push_back(n - (i / 2));

        } else {
            dq.push_back(i / 2);
        }
    }
    for (auto x : dq) {
        cout << x << " ";
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