#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int query(int l, int r)
{
    if (l >= r)
        return -1;
    cout << "? " << l + 1 << " " << r + 1 << endl;
    int x;
    cin >> x;

    return x - 1;
}

void binarySearch(int n)
{

    int l = 0, r = n, ans = 0;

    while (r - l > 1) {
        int m = (l + r) / 2;
        int smax = query(l, r - 1);

        bool smaxSmallerThanM = (smax < m);

        int res = (smaxSmallerThanM ? query(l, m - 1) : query(m, r - 1));

        if (smaxSmallerThanM) {

            (res == smax ? r = m : l = m);
        } else {

            (res == smax ? l = m : r = m);
        }
    }

    cout << "! " << r << endl;
}

void solve()
{
    int n;
    cin >> n;
    binarySearch(n);
}
int32_t main()
{

    ios_base::sync_with_stdio(false);

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}