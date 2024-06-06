#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void print(vector<ll>& k)
{
    for (auto x : k) {
        cout << x << " ";
    }
    cout << endl;
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> k(n);

    ll lcm = 1;

    
    for (int i = 0; i < n; i++) {
        cin >> k[i];
        lcm = lcm * k[i] / __gcd(lcm, k[i]);
    }
  
    ll invested = 0;
    vector<ll> bet(n, 1);

   for (int i = 0 ; i < n ; i++) {
        bet[i] = lcm / k[i];
        invested += bet[i];
    }

    for (int i = 0; i < n; i++) {

        if (bet[i] * k[i] <= invested or bet[i] > 1e9) {
            cout << -1 << endl;
            return;
        }
    }

    print(bet);
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