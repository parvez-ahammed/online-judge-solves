#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 


    char c ;
    int r;

    cin >> c >> r;

    

    for (int i = r+1  ;  i <= 8 ; i++ )
        cout << c << i << endl;

    for (int i = r-1  ;  i >= 1 ; i-- )
        cout << c << i << endl;
    
    for (int i = c+1  ;  i <= 'h' ; i++ )
        cout << (char)i << r << endl;
    
    for (int i = c-1  ;  i >= 'a' ; i-- )
        cout << (char)i << r << endl;
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