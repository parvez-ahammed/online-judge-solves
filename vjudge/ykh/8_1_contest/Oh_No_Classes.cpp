#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int a1, b1, a2, b2, a3, b3;

    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    vector<int> v(1e6 + 5, 0);

    for (int i = a1; i <= b1; i++) {
        v[i] = 1;
    }

    for (int i = a2; i <= b2; i++) {
        v[i] = 1;
    }

    for (int i = a3; i <= b3; i++) {
        v[i] = 1;
    }

    int cnt = 0;

    for (int i = 0; i <= 1e6+5; i++) {
        cnt += v[i];
    }

    cout << cnt << endl;


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