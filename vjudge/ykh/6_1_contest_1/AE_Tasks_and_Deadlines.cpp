#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 


    int n ;
    cin >> n ;

    vector<pair <int,int> > v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(),v.end());

    ll currTime = 0;

    ll reward = 0;
    // sorted based on the which task takes less time

    for (int i = 0 ; i < n ; i++)
    {
        currTime += v[i].first;
        reward += (v[i].second - currTime);
    }

    cout << reward << endl;



}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}