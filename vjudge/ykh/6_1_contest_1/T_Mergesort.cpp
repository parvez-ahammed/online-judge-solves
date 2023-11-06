#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 1e5 + 9;

int n, a[N], b[N];

void merge(int left, int right)
{ 
    if (left >= right)
        return;


    int mid = (left + right) / 2;
    merge(left, mid);
    merge(mid + 1, right);

    
    int lp = left, rp = mid + 1;
    for (int i = left; i <= right; i++) {
        if (lp > mid) {
            b[i] = a[rp++];
        } else if (rp > right) {
            b[i] = a[lp++];
        } else if (a[lp] <= a[rp]) {
            b[i] = a[lp++];
        } else {
            b[i] = a[rp++];
        }
    }
    for (int i = left; i <= right; i++) {
        a[i] = b[i];
    }
}

void solve()
{

    int x;
    while (cin >> x) {
        n++;
        a[n] = x;
    }

        merge(1, n);

    for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
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