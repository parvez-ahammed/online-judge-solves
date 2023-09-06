#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int binSearchLeft(vector<int>& a, int x)
{
    int l = -1; // a[l] <= x
    int r = a.size(); // a[r] > x

    while (r > l + 1) {
        int m = (l + r) / 2;

        if (a[m] <= x)
            l = m;
        else
            r = m;
    }

    return l;
}

int binSearchRight(vector<int>& a, int x)
{
    int l = -1; // a[l] < x
    int r = a.size(); // a[r] >= x

    while (r > l + 1) {
        int m = (l + r) / 2;

        if (a[m] < x)
            l = m;
        else
            r = m;
    }

    return r;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    cin >> k;

    while (k--) {
        int l, r;

        cin >> l >> r;

        int left = binSearchLeft(a, l - 1);
        int right = binSearchRight(a, r + 1);

        cout << right - (left + 1) << " ";
    }
    return 0;
}