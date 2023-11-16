#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<int> prefix_xor(2005, 0);

int prefix_l_to_r(int l, int r)
{
    return prefix_xor[l - 1] ^ prefix_xor[r];
}
void solve()
{

    int n;
    cin >> n;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        prefix_xor[i] = prefix_xor[i - 1] ^ v[i];
    }

    for (int i = 1; i < n; i++) {
        int x = prefix_l_to_r(1, i);
        int y = prefix_l_to_r(i + 1, n);

        if (x == y) {
            cout << "YES" << endl;
            return;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j < n; j++) {
            int x = prefix_l_to_r(1, i);
            int y = prefix_l_to_r(i + 1, j);
            int z = prefix_l_to_r(j + 1, n);

            if (x == y and x == z) {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
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