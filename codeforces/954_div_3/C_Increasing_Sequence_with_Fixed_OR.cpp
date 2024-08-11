#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    ll n;
    cin >> n;

    vector<ll> v;
    ll curr = 1;
    int cnt = 0;

    ll last = 0;
    while (curr <= n) {
        v.push_back(curr);

        
        if ((curr + 1) | curr == n and (curr + 1) <= n){
          
            v.push_back(curr + 1);
            curr ++ ;
        }
        last = curr ^ n;

        curr = (curr | (curr + 1));
        // cout << curr << " ";
    }

    if (last <= n and last >= v.back()) {
        v.push_back(last);
    }

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
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