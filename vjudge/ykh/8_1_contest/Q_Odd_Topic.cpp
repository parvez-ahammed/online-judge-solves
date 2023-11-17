#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int MAXN = 4005;
void solve()
{

    int n, m, q;
    cin >> n >> m >> q;

    vector<int> a(n + 1), b(m + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];

    vector<bitset<MAXN>> prefixA(n + 1), prefixB(m + 1);

    prefixA[0] = 0;
    prefixB[0] = 0;

    for (int i = 1; i <= n; i++) {
        prefixA[i] = (prefixA[i - 1]);
        prefixA[i].flip(a[i]);
    }



    for (int i = 1; i <= m; i++) {
        prefixB[i] = (prefixB[i - 1]);
        prefixB[i].flip(b[i]);
    }

    while (q--) {
        int l1, r1, l2, r2;

        cin >> l1 >> r1 >> l2 >> r2;

        //cout << l1 << " " << r1 << " " << l2 << " " << r2 << endl;

        bitset<MAXN> countA = prefixA[r1] ^ prefixA[l1 - 1];
        bitset<MAXN> countB = prefixB[r2] ^ prefixB[l2 - 1];
        bitset<MAXN> totalCount = countA ^ countB;
        cout << totalCount.count() << endl;
    }
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