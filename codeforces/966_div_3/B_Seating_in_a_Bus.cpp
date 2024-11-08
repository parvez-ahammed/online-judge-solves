#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    // has n seats from 1 too n
    // if empty can sit anywhere
    // if not then must have a neighbour

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        if (mp.size() == 0) {
            mp[v[i]]++;
        } else {
            if (mp[v[i] + 1] == 0 and mp[v[i] - 1] == 0) {
                cout << "NO" << endl;
                return;
            }

            
        }
    }

    cout << "YES" << endl;
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