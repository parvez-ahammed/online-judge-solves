#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    vector<ll> v;
    int cnt = 2;
    for (int i = 0; i < n; i++) {
        cout << cnt << " ";

        v.push_back(cnt);
        cnt+=3;
    }

    bool possible = true;

    for (int i = 2; i < n; i++) {
        int val = v[i - 2] + v[i - 1];

        if ( (3* v[i]) % val == 0) {
            possible = false;
            break;
        }
    }

    //cout << possible << endl;

    cout  << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}