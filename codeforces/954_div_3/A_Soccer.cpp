#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2 and y1 == y2) {
        cout << "YES" << endl;
        return;
    }

    string result = "";
    if (x1 <= y1 and y2 <= x2)
        result = "NO";
    else if (y1 <= x1 and x2 <= y2)
        result = "NO";
    else
        result = "YES";
    cout << result << endl;
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