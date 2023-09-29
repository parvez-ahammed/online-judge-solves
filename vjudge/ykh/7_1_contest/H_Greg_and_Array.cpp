#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

struct operation {
    int l, r, d;
};
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;

    cin >> n >> m >> k;

    vector<int> v(n + 2), diff(n + 2);


    // input
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    // diff array
    for (int i = 1; i <= n; i++)
        diff[i] = v[i] - v[i - 1];

    vector<operation> op(m + 2);


    // operations description
    for (int i = 1; i <= m; i++) {
        cin >> op[i].l >> op[i].r >> op[i].d;
    }

    vector<int> opDiff(m + 2);

    // when same thing can repeat multiple times keep it in check that you can do it once just by multiplying so try to reduce to that

    // operation on diff array
    while (k--) {
        int l, r;
        cin >> l >> r;

        opDiff[l]++;
        opDiff[r + 1]--;
    }


    // prefix sum of operations
    for (int i = 1; i <= m; i++)
        opDiff[i] += opDiff[i - 1];

    // operation on diff array
    for (int i = 1; i <= m; i++) {
        int l = op[i].l;
        int r = op[i].r;
        int d = op[i].d;


        diff[l] += (opDiff[i] * d);
        diff[r + 1] -= (opDiff[i] * d);
    }

    // prefix sum of diff array
    for (int i = 1; i <= n; i++)
        v[i] = v[i - 1] + diff[i];

    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}