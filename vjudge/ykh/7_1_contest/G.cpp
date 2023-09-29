#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


void solve ()
{
    int n , u;
    cin >> n >> u;

  

    vector<int> diff(n+1);

    while (u--)
    {
        int l , r , val;
        cin >> l >> r >> val;
        l++;
        r++;

        diff[l] += val;
        diff[r+1] -= val;
    }

    

    vector<int> v(n+1);

    for(int i =1 ; i <= n ; i++)
    {
        v[i] = v[i-1] + diff[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int idx;
        cin >> idx;
        cout << v[idx+1] << endl;
    }
    

}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}