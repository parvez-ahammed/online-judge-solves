#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    set<int> s;

    int k;

    map<int, int> mp;
    int ans = 0;

    for (int i = 0 , j=0; i < n; i++) {

        cin >> k;

        j = max(mp[k], j);
        ans = max(ans, i - j + 1);
        mp[k] = i + 1;
    }

    

    cout << ans << endl;

    return 0;
}