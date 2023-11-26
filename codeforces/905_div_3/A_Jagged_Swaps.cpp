#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    if (v[1] != 1) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    // if (is_sorted(v.begin(), v.end())) {
    //     cout << "YES" << endl;
    //     return;
    // }

    // for (int i = 2; i < n; i++) {
    //     if (v[i] > v[i-1] and v[i] > v[i + 1]) {
    //         swap (v[i], v[i + 1]);
    //     } 
    // }


    // if (is_sorted(v.begin(), v.end()))
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;


    
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