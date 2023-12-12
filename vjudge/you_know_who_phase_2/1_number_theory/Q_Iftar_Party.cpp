#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<int> getDivisors(int q, int l)
{
    vector<int> ans;
    int val = q - l;

    for (int i = 1; 1ll * i * i <= val; i++) {
        if (val % i == 0) {

            if (l < i)
                ans.push_back(i);

            if (val / i != i and l < val / i)
                ans.push_back(val / i);
        }
    }

    return ans;
}

void solve()
{
    int c, p, q, l;

    cin >> q >> l;

    vector<int> ans = getDivisors(q, l);

    if (ans.empty())
        cout << "impossible";
    else {
        sort(ans.begin(), ans.end());
        for (auto q : ans)
            cout << q << ' ';
    }
    cout << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}