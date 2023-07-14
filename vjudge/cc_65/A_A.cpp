#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int ones = 0, x = 0;
    rep(0, n) cin >> x, ones += (x == 1 ? 1 : 0);

    cout << min(ones, n - ones) << endl;
    return 0;
}