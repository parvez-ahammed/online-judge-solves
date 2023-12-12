#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int N = 1e6 + 7, M = 1e6;
void solve()
{
    vector<int> occ(N, 0), multiplier(N, 0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        occ[x]++;
    }

    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) {
            multiplier[i] += occ[j];
        }
    }

    for (int i = 1; i <= M; i++) {
        cout << multiplier[i] << " ";
    }
    cout << endl;
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