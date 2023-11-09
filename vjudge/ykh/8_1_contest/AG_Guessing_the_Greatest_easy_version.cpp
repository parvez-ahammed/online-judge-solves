#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool query(int l, int r)
{
    cout << "? " << l << " " << r << endl;
    int x;
    cin >> x;

    return x <= r;
}

void binarySearch(int n)
{

    int l = 1, r = n, ans = 0;

    while (l < r) {

        int mid = (l + r) / 2;

        // ami guess korechi je mid tai amar maximum Number

        // secIndice <= mid hole amar max ta left side e ache

        if (query(l, mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << "! " << ans << endl;
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