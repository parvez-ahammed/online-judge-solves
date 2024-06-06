#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, f, k;

    cin >> n >> f >> k;
    vector<int> a(n + 1, 200);
    int fav = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (f == i) {
            fav = a[i];
        }
    }

    sort(a.rbegin(), a.rend());

    bool ageAche = false;

    for (int i = 1; i <= k; i++) {
        if (a[i] == fav) {
            ageAche = true;
            break;
        }
    }

    bool poreAche = false;

    for (int i = k+1; i <= n; i++) {
        if (a[i] == fav) {
            poreAche = true;
            break;
        }
    }

    if (ageAche && poreAche) {
        cout <<"MAYBE" << endl;
    } else if (ageAche and !poreAche) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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