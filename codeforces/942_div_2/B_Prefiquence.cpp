#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{   

    int  n , m;
    cin >> n >> m;

    string a, b;
    cin >> a >> b;

    int res = 0;

    int i = 0;
    int j = 0;
    for (; i < a.size() and j < b.size();) {

        if (a[i] == b[j]) {
            i++;
            j++;
            res++;
        } else {
            while (a[i] != b[j] && j < b.size()) {
                j++;
            }
        }
    }

    cout << res << endl;
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