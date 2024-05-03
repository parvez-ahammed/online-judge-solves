#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int N;

void solve()
{

    cin >> N;

    cout << 1 << " " << 1 << endl;
    cout << 1 << " " << 2 << endl;
    for (int i = 3; i <= N; i++) {
        cout << i << " " << i << endl;
    }
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