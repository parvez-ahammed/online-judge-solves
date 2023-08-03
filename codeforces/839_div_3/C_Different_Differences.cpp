#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

vector<int> prefix(50, 0);

void solve()
{
    int k, n;
    cin >> k >> n;

    vector<int> ans;
    for (int i = 1; i <= k; i++)
        ans.push_back(prefix[i]);

    while (ans.back() > n || (n - ans.back() < (k - ans.size())))

        ans.pop_back();

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    for (int i = 0, j = ans.back() + 1; i < k - ans.size(); ++j, i++)

        cout << j << " ";

    cout << endl;
}
int32_t main()
{

    prefix[1] = 1;
    for (int i = 2; i < 42; i++)
        prefix[i] += prefix[i - 1] + i - 1;

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}