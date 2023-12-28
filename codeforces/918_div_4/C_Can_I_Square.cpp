#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> v(n + 1);


    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

   

    ll sq = sqrt(sum);

    if (sq * sq != sum)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
       
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