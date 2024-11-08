#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    string a;
    cin >> a;

    if (a.size() > 2) {
        if (a[0] == '1' and a[1] == '0') {

            if ((a[2] == '1' and a.size() > 3) or a[2] >= '2') {
                cout << "YES";
            } else
                cout << "NO";

        }

        else
            cout << "NO";
    } else {
        cout << "NO";
    }

    cout << endl;
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