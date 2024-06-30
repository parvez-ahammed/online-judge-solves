#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (is_sorted(a.begin(), a.end())) {
        cout << 0 << endl;
        return;
    }



    int mx = -1;

    vector<int> haveToIncrease(n, 0);

    vector<int> cal;

    for (int i = 0; i < n; i++) {
        if (a[i] <= mx) {
            haveToIncrease[i] = mx - a[i];
        }
        mx = max(mx, a[i]);

        if (haveToIncrease[i] > 0) {
            cal.push_back(haveToIncrease[i]);
        }
    }

    sort (cal.begin(), cal.end());


  

    ll alreadyMinus = 0;
    int cnt = 0;

    ll point = 0;
    for(int i = 0 ;i < cal.size()  ; i++)
    {
        cal[i] -= alreadyMinus;
        if (cal[i] > 0)
        {
            alreadyMinus += cal[i];

            point += ((cal.size() - i) + 1) * cal[i];

        }
    }

    cout << point << endl;
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