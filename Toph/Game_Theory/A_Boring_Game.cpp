#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int solve()
{
    int n;

    int root, child;

    cin >> n;

    vector<int> tree[n + 5];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> root >> child;

        tree[root].push_back(child);
        tree[child].push_back(root);
    }

    int cnt = 0;

    for (int i = 0; i < n + 5; i++)

        cnt += (tree[i].size() == 1);

    return cnt;
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        cout << "Case " << i << ": " << solve() << endl;
    }
    return 0;
}