#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MAX = 1e5 + 5;

vector<int> primeDivisors(MAX, 0);

void init()
{
    for (int i = 2; i < MAX; i++) {
        if (primeDivisors[i] == 0) {
            for (int j = i; j < MAX; j += i) {
                primeDivisors[j]++;
            }
        }
    }
}

void solve()
{

    int n;
    cin >> n;

    ll cnt = 1;

    for (int i = 2; i <= n; i++) {

        cnt = (cnt * (primeDivisors[i] + 1));
    }
    cout << cnt << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    init();
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}