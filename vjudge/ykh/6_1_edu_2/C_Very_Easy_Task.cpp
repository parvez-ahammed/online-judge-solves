#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int n, x, y;

bool ok(int mid)
{

    if (x > y)
        swap(x, y);

    ll cnt = 0;

    if (x <= mid) {
        cnt = 1;
        mid -= x;

        cnt += (mid / y);
        cnt += (mid / x);
    }

    return cnt >= n;
}

int binSearch()
{

    int l = 1, r = 2e9 , ans = 0;


    while (l <= r) {

        int mid = l + (r - l) / 2;

        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {

            l = mid + 1;
        }
    }

    return ans;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> x >> y;

    cout << binSearch() << endl;

    return 0;
}