#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int minV = INT_MAX;

    vector<int> v(n);
    rep(0, n) cin >> v[i];
    ll ans = 0;
    bool possible = true;
    for (int i = n - 1; i >= 1; i--)
    {

        if (v[i] <= v[i - 1])
        {
            int have_to_kill = v[i - 1] + 1 - v[i];
            v[i - 1] -= have_to_kill;

            ans += have_to_kill;
        }

    
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1] || v[i] < 0)
        {
            possible = false;
        }
    }


    if (!possible)
        ans = 1;

    cout << ans << endl;
    return 0;
}