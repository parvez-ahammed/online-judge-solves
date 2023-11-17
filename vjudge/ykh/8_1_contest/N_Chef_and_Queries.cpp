#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define u_int unsigned int

const unsigned int N = (1u << 31);
bitset<N> exists;
void solve()
{

    int q;
    u_int s, a, b;

    cin >> q >> s >> a >> b;

    ll sum = 0;
    while (q--) {
        u_int x = s / 2;
        if (s & 1) {

            if (!exists[x]) {
                exists[x] = true;
                sum += x;
            }

        } else {
            if (exists[x]) {
                exists[x] = false;
                sum -= x;
            }
        }

        s = a * s + b;
    }

    cout << sum << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}