#include <bits/stdc++.h>
using namespace std;
/**----data type----*/


void solve()
{
    int n;
    cin >> n;
    
    cout << pow(2,int(log2(n))) << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}