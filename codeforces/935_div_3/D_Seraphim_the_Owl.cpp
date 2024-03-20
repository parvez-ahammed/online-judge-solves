#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n, m;

    cin >> n >> m;

    vector<int> a(n + 1), b(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    int step = n + 1;
    for (int i = m; i <= n; i++) {
        if (a[i] <= b[i]) {
            step = i;
            break;
        }
    }

    long long cost = 0;

    for (int i = n; i >= step; i--) {
        cost += min(a[i], b[i]);
    }

    if (step <= m) {
        cout << cost << endl;
        return;
    }

    vector<long long> suff(n + 5, 0);

    for (int i = n; i >= 1; i--) {
        suff[i] = suff[i + 1] + b[i];
    }
    ll add = LONG_LONG_MAX;
    for (int i = m; i > 0; i--) {
        add = min(add, a[i] + suff[i+1] - suff[step]);
    }

 

    cout << cost + add << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}