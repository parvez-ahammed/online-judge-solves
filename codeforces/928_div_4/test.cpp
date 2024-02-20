#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    ll sum = 0;

    vector<int> a(n);
    vector<int> b(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] > 0)
            sum += a[i];

        if (a[i] < 0)
            b[i] = 1;
    }
    int move = 0;

    int i = 0;
    while (a[i] < 0 and i < n) {
        i++;
    }

    --n;
    while(a[n] < 0 and n >= 0){
        n--;
    }
    
    for (; i <= n; i++) {

        if (b[i] == 1) {
            while (b[i] == 1 and i < n) {
                i++;
            }
            move++;
        }
    }

    cout << sum << " " << move << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}