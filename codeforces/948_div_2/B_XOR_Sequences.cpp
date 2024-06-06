#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define isBitSet(S, j) (S & (1 << j))
void solve()
{

    int x, y;
    cin >> x >> y;

    int cnt = 0;

    bitset<32> b1(x);
    bitset<32> b2(y);

    for (int i = 31; i >= 0; i--) {
        if (b1[i] == b2[i]) {
            cnt++;
        } else
            cnt = 0;
    }
    int val = pow(2, cnt) ;
    cout << val << endl;
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