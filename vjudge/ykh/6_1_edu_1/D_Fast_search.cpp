#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int binSearchLeft(vector<int>& a, int x)
{
    int l = 1;
    int r = a.size() - 1;

    int ans = 0;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (a[mid] <= x)

            ans = mid, l = mid + 1;
        else
            r = mid - 1;
    }

    return ans;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    cin >> k;

    while (k--) {
        int l, r;

        cin >> l >> r;

        cout << binSearchLeft(a, r) - binSearchLeft(a, l - 1) << " ";
    }
    return 0;
}