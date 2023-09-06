#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int a, b;
        cin >> a >> b;

        if (a == 0) {
            b = 0;
        }

        cout << (a + (b * 2ll)) + 1ll << endl;
    }
    return 0;
}