#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0 ; i < n; i++)
        cin >> v[i];

    
    vector<int> c(26 ,0);
    string ans = "";
    for (int i = 0 ; i < n ; i++)
    {

        int val = v[i];


        for (int j = 0 ; j < 26 ; j++)
        {
            if (c[j] == val)
            {
                ans += (char)(j + 'a');
                c[j]++;
                break;
            }
        }

    }


    cout << ans << endl;



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