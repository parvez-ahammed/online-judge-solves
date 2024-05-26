#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, m;
    cin >> n >> m;

    // after n times increase or decrease of value n is it possible to make m;

    if (n < m) {
        cout << "No" << endl;
        return;
    }

    if (n == m) {
        cout << "Yes" << endl;
        return;
    }
    if ((n - m) %2 == 0) {
        cout << "Yes" << endl;
        return;
    }

    cout << "No" << endl;

    
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