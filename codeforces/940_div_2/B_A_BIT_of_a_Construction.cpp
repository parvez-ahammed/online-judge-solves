#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

#define isSet(n, k) (n & (1 << k))
#define setBit(n, k) (n | (1 << k))
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;

    if (n == 1) {
        cout << k << endl;
        return;
    }
    int x = 0;
    for (int i = 0; i <= 30; i++) {

        if (setBit(x, i) <= k)
            x = setBit(x, i);
        else
            break;
    }

    k -= x;
    a.push_back(x);
    a.push_back(k);
    n -= 2;

    while (n--) {
        a.push_back(0);
    }
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
        
    }

    cout << endl;
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
/*

KINBO.COM

*/