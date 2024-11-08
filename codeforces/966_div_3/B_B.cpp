#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<int, int> idx;
    map<int, int> visited;
    int prefixXOR = 0;

    idx[0] = -1;

    for (int i = 0; i < v.size(); ++i) {
        prefixXOR ^= v[i];
        if (i >= 4 and visited.find(prefixXOR) != visited.end()) {
            cout << "Yes";
            return;
        }
        visited[v[i]] = 1;

        if (i >= 3 and idx.find(prefixXOR) != idx.end() ) {
            int prevIndex = idx[prefixXOR];
            if (i - prevIndex >= 3) {
                cout << "Yes";
                return;
            }
        } else {
            idx[prefixXOR] = i;
        }
    }

    cout << "No";
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}