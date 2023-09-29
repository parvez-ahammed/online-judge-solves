#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    int mx = 1e6 + 7;

    vector<int> v(mx, 0);
    for (int i = 1; i < mx; i++) {
        for (int j = i; j < mx; j += i) {
            v[j]++;
        }
    }
    while (tc--) {
        int x;
        cin >> x;
        cout << v[x] << endl;
    }
    return 0;
}