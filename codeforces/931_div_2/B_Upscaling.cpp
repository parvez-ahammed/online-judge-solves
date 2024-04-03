#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    string hash = "##", dots = "..";


    string oddLines  = "";
      string evenLines = "";

    for (int i = 1; i <= n; i++) {
        oddLines += (i % 2 == 1 ? hash : dots);
         evenLines += (i % 2 == 0 ? hash : dots);
    }

  

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            cout << oddLines << endl;
            cout << oddLines << endl;
        } else {
            cout << evenLines << endl;
            cout << evenLines << endl;
        }
    }





    
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