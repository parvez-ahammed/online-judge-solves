#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() {

    int n ;
    cin >> n ;
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        string x ;
        cin >> x ;
        if(x == "Takahashi") cnt++;
    }

    cout << cnt << endl;
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