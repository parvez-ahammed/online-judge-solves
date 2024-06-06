#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 

    int n ;
    cin >> n;
    vector<int> a(n) , b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i]>> b[i];
    }

    int sum = 0 ;

    for (int i = 0; i < n; i++) {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
        for (int j = 0; j < n; j++) {
            if (i != j) {
            sum = max (sum , (a[i] * b[j]) + (a[j] * b[i]) ) ;
            }
        }                                                                                                                                                                                                                                                                                                                                                
    }    
    cout << sum << endl;                                                                                                                                                                                                                                                                                                                                               

                                                            
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