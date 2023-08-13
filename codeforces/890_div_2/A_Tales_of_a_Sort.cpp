#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    int n, x;
    cin >> n;
    vector<int> v(n), take;


    for (int i = 0; i < n; i++)
        cin >> v[i];
    

    take.push_back(0);

    

    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
            take.push_back(v[i - 1]);
    }

    sort(take.begin(), take.end());

    cout << take.back() << endl;
}
int32_t main()
{

    FAST;

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}