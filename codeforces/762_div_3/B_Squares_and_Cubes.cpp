#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    set<int> s;

    for (int i = 1; i * i <= n; i++) {
        s.insert(i * i);
    }

    for (int i = 1; i * i * i <= n; i++) {
        s.insert(i * i * i);
    }

    cout << s.size() << endl;
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
