#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, k;
    cin >> n >> k;

    // declare a 2d vector of size k row n column
    vector<vector<int>> a(k, vector<int>());

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            a[i].push_back(x);
        }

        // print the vector

        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    if (k == 1) {
        cout << "YES" << endl;
        return;
    }

    map <int, int> mp;

    for (int j = 0; j < n; j++) {
        mp[a[0][j]] = j;
    }

    // print the map


    cout << "INITIAL POSITION" <<endl;
    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }

    cout << endl;
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