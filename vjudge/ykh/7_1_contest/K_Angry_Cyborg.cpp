#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<int> statues;

void prefix_sum(vector<int>& arr)
{
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        arr[i] += arr[i - 1];
    }
}

void solve()
{

    int n, q;
    cin >> n >> q;

    statues.clear();
    statues.resize(n + 1, 0);
    int l, r;

    for (int i = 0; i < q; ++i) {

        cin >> l >> r;
        --l, --r;
        ++statues[l];
        
        if (r + 1 < n)
            statues[r + 1] -= (r - l + 2);
        if (r + 2 < n)
            statues[r + 2] += (r - l + 1);
    }

    prefix_sum(statues);
    prefix_sum(statues);

    for (int i = 0; i < n; ++i) {
        cout << statues[i] << ' ';
    }
    cout << endl;
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
    return 0;
}