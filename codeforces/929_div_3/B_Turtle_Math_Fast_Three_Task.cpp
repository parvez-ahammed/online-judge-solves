#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> a;
    int oneCount = 0, twoCount = 0, zeroCount = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        x %= 3;
        zeroCount += (x == 0);
        oneCount += (x == 1);
        twoCount += (x == 2);
    }

    int sum = oneCount + twoCount * 2;
    sum %= 3;

    if (zeroCount == n or sum == 0) {
        cout << 0 << endl;
        return;
    }

    twoCount %= 3;

    if (twoCount == 2 and oneCount == 0) {
        cout << 2 << endl;
        return;
    }

    cout << 1 << endl;
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