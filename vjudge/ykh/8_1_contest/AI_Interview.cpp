#include "bits/stdc++.h"
using namespace std;
#define ll long long

const int sz = 500005;
int a[sz];
int presum[sz];

bool query(int lt, int rt)
{
    cout << "? " << rt - lt + 1;
    for (int i = lt; i <= rt; i++) {
        cout << " " << i;
    }
    cout << endl;

    int sum;
    cin >> sum;
    return !(sum == presum[rt] - presum[lt - 1]);
}

int binarySearch(int n)
{
    int left = 1, right = n, mid, ans;
    while (left <= right) {
        if (left == right) {
            return left;
        }
        mid = (left + right) / 2;
        if (query(left, mid)) {
            ans = left;
            right = mid;
        } else
            left = mid + 1;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        presum[i] = presum[i - 1] + a[i];
    }
    int ans = binarySearch(n);
    cout << "! " << ans << endl;
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}