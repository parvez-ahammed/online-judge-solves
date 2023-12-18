#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<int> v(32, 0);

bool possibleToReachSum(int x)
{
    for (int i = 30; i >= 0; i--) {
        ll val = (1 << i);
        int kotoBarJay = x / val;
        kotoBarJay = min(kotoBarJay, v[i]);

        ll finalVal = val * kotoBarJay;
        x -= finalVal;

        if (x == 0) {
            return true;
        }
    }

    return false;
}
void solve()
{

    ll type, x;
    cin >> type >> x;
    if (type == 1) {
        v[x]++;
    } else {
        bool ok = possibleToReachSum(x);
        cout << (ok ? "YES" : "NO") << endl;
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