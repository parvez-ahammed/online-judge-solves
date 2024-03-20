#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool check(int n , int a  , int b )

{


    double halfofN = n / 2.0;
    double aRes = abs(halfofN - a);
    double bRes = abs(halfofN - b);

    return aRes > bRes;
}
    
void solve()
{

    int n;
    string s;
    cin >> n >> s;

    s.insert(0, "#");

    int totZeroCnt = 0, totOneCnt = 0;

    for (int i = 1; i <= n; i++) {
        totZeroCnt += (s[i] == '0');
        totOneCnt += (s[i] == '1');
    }

    vector<pair<int, int>> pref(n + 1, { 0, 0 });

    for (int i = 1; i <= n; i++) {
        pref[i].first = pref[i - 1].first + (s[i] == '0');
        pref[i].second = pref[i - 1].second + (s[i] == '1');
    }

    int line = INT_MAX;

    for (int i = 0; i <= n; i++) {
        int onLeftZero = pref[i].first;
        int onRightOne = totOneCnt - pref[i].second;

       

       

        int leftHalfResident = (i + 1) / 2;
        int rightHalfResident = (n - i) / 2;

        if (onLeftZero >= leftHalfResident and onRightOne >= rightHalfResident) {
            // cout << "i " << i  << " onLeftZero: " << onLeftZero << " onRightOne: " << onRightOne << endl;

             if (check(n , line , i)) {
                 line = i;
             }
            
        }
    }
    cout << line << endl;
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