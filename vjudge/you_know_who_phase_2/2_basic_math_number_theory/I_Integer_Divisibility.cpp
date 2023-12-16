#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

void solve()
{

    int n, d;
    cin >> n >> d;
    int curr = 0, len = 0;
    do {
        curr = (curr * 10 + d) % n;
        len++;

    } while (curr > 0);
    cout << len << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--) {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}