#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void brtueForce(vector<int> prefixXor, int n)
{
    ll sum = 0;
    for (int l = 1; l <= n; l++) {
        for (int r = l; r <= n; r++) {

            int xorSum = prefixXor[r] ^ prefixXor[l - 1];

            sum += xorSum;
        }
    }
    cout << sum << endl;
}

void efficient(vector<int> prefixXor, int n , vector<int> v)
{
    ll sum = 0;
    vector<vector<int>> masks(n + 1, vector<int>(32, 0));

    for (int i = n - 1; i >= 1; i--) {
        vector<int> temp(32, 0);
        int prevXor = prefixXor[i + 1];

        for (int j = 0; j < 31; j++) {
            masks[i][j] = masks[i + 1][j];
            if (prevXor & (1 << j)) {
                masks[i][j]++;
            }
        }

        // cout << "FOR i " << i << endl;
        // cout << "prevXor " << bitset<10>(prevXor) << endl;

        // for (int j = 10; j >= 0; j--) {
        //     cout << masks[i][j] ;
        // }
        // cout << endl;
    }

    for (int i = 1; i <= n; i++) {

        sum += v[i];

        // cout << "OLD SUM " << sum << endl;

        for (int j = 0; j < 31; j++) {
            int cntOne = masks[i][j];

            // cout << cntOne ;
            int cntTot = n - i;
            int cntZero = cntTot - cntOne;
            // bit is on

            // cout << "FOR j " << j << " cntOne " << cntOne << " cntZero " << cntZero << endl;
            if (prefixXor[i - 1] & (1 << j)) {

                // if this bit is on then count number of zeros ahead
                sum += 1LL * (1 << j) * (cntZero);
            } else {
                sum += 1ll * (1 << j) * (cntOne);
            }
        }

        // cout << "\nNEW SUM " << sum << endl;
    }

    cout << sum << endl;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1), prefixXor(n + 1);
    ll sum = 0;
    ll allXor = 0;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        prefixXor[i] = prefixXor[i - 1] ^ v[i];
    }

    //brtueForce(prefixXor, n);
    efficient(prefixXor, n , v);

    //cout << endl;
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
