#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    int time = 0;
    for (int i = 1; i <= n; i++) {

        if (v[i] < time) {

            if (time % v[i] != 0) {
                int x = time / v[i];
                time = (x + 1) * v[i];
            }

        } else if (v[i] > time) {
            time = v[i];
        }
        time += (i != n);
    }

    cout << time << endl;
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