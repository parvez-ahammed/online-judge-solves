#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    ll a, s;
    cin >> a >> s;
    string b = "";
    while (s) {
        int x = a % 10;
        int y = s % 10;
        if (x <= y)
            b += to_string(y - x);
        else {
            s /= 10;
            y += 10 * (s % 10);
            if (x < y and y >= 10 and y <= 19)
                b += to_string(y - x);
            else {
                cout << -1 << endl;
                return;
            }
        }

        
        a /= 10;
        s /= 10;
    }
    if (a)
        cout << -1 << endl;
    else {

        while(b.back() == '0')
            b.pop_back();
        reverse(b.begin(), b.end());
        cout << b << endl;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
