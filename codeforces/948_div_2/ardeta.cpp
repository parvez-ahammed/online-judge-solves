#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int N;
    cin >> N;
    int counter = (N - 1) % N / 2;
    if (counter == 0 and N > 1)
        counter = 1;
    cout << counter << endl;
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