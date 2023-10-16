#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve(int n, int q)
{
    
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
    
        sort(v.begin(), v.end());
    
        while (q--) {
            int x;
            cin >> x;
    
            int idx = lower_bound(v.begin(), v.end(), x) - v.begin();
    
            if (idx < n && v[idx] == x) {
                cout << x << " found at " << idx + 1 << endl;
            }
            else {
                cout << x << " not found" << endl;
            }
        }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;

    int tc = 1;
    while (cin >> n >> q) {

        if (n == 0 && q == 0) {
            break;
        }
        cout << "CASE# " << tc++ << ":" << endl;
        solve(n, q);
    }
    return 0;
}