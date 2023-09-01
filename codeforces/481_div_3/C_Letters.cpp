#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;

    cin >> n >> m;
    vector<ll> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<ll> prefix(n + 1, 0);

    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + a[i];
    }

    for (int i = 0; i < m; i++) {
        ll key = b[i];

        int dorm = lower_bound(prefix.begin(), prefix.end(), key) - prefix.begin();


        ll roomNumber = key - prefix[dorm - 1];

        cout << dorm << " " << roomNumber << endl;
    }
    return 0;
}