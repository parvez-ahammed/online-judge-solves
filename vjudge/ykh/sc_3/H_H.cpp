#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<vector<int>> v;


// complexity 100 * 100 = 10^4
vector<int> getList(int a, int b, int c, int d)

{

    --a;
    --b;

    vector<int> temp;

    for (int i = a; i < c; i++) {
        for (int j = b; j < d; j++) {
            temp.push_back(v[i][j]);
        }
    }

    return temp;
}
void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        vector<int> temp;
        for (int j = 0; j < m; j++) {
            int val;
            cin >> val;
            temp.push_back(val);
        }
        v.push_back(temp);
    }

    while (q--) {

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        vector<int> temp = getList(a, b, c, d);

        sort(temp.begin(), temp.end());

        // print the temp vector

        for (auto it : temp)
        {
            cout << it << " ";
        }

        cout << endl;

        int sz = temp.size();

        if (sz % 2 == 0)
            --sz;

        int ans = temp[sz / 2];

        cout << ans << endl;
    }
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