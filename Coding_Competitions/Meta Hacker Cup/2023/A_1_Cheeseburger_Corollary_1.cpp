#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int s, d, k;
    cin >> s >> d >> k;

    int buns = ((s + d) * 2);
    int patty = s + (d * 2);

    int need_buns = k + 1, need_patty = k;

    if (buns >= need_buns && patty >= need_patty) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int32_t main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    // output in a file 
    //freopen("output.txt", "w", stdout);

    


    for (int i = 1; i <= tc; i++) {
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}