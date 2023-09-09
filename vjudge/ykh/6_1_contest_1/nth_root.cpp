// find the kth root of number n

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
double n, k;

bool ok(double mid)

{

    double ans = mid;

    for (int i = 1; i < k; i++) {
        ans *= mid;
    }

    return ans <= n;
}
double binSearch()
{

    double ans = 0, l = 0, r = 1e9, mid;

    int iteration = 100;
    while (iteration--) {
        mid = (l + r) / 2;
        (ok(mid)) ? (ans = mid, l = mid) : (r = mid);
    }

    return ans;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    cout << fixed << setprecision(10) << binSearch();
    return 0;
}