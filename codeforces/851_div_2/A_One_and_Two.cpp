#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> v(n + 1), suffix(n + 1), prefix(n + 1);

    int cnt = 0;
    for (int i = 1; i <= n; i++)
        cin >> v[i]  , cnt += (v[i] ==2);

    


    int k = -1;

    int curr = 0;
    for (int i = 1 ; i <= n  ; i++)
    {
        curr += (v[i] == 2);

        if (curr * 2== cnt)
        {
            k = i;
            break;
        }
    }

    

   

    cout << k << endl;
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