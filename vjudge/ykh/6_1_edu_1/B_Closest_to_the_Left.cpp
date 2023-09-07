#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int binSearch(vector<int>& a, int x)
{
    int l = 1; // a[l] <= x
    int r = a.size() - 1; // a[r] > x

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
    cin >> n >> k;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    while (k--) {
        int x;
        cin >> x;

        int indice = binSearch(a, x);

        cout << indice << endl;
    }
    return 0;
}