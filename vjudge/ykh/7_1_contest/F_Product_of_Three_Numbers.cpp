#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

void solve()
{
    int n;

    cin >> n;

    int mx = 3e4 + 7;

    for (int i = 2; i <= mx; i++) {

        if (n % i == 0) {

            int temp = n / i;

            for (int j = i + 1; j <= mx; j++) {

                if (temp % j == 0) {
                    int need = temp / j;

                    if (need != i and need != j and need > 1) {
                        cout << "YES" << endl;
                        cout << i << " " << j << " " << need << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "NO" << endl;
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

    // cerr << "\n\n\n"
    //      << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
    return 0;
}
