#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> a(n);
    int maximum = 0;
    int minimum = 0;
    int current = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] >= l and a[i] <= r)
            current++;
        else {
            current--;
        }

        maximum = max(maximum, current);
        minimum = min(minimum, current);
    }

    cout << maximum<< " " << minimum << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}