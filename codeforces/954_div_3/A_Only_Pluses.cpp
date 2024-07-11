#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];

    for (int i = 0 ;i < 5 ; i++)
    {
        sort(a.begin(), a.end());
        a[0]++;
    }
   

    cout << a[0] * a[1] * a[2] << endl;
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