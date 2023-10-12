#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "YES" << endl;
        return;
    }

    int first = 0, second = 0, third = 0;

    first = min({ a, b, c });
    third = max({ a, b, c });
    second = (a + b + c) - (first + third);

    int cnt = 0;

    if (second % first == 0) {
        cnt += ((second / first) - 1);
    } else {
        cout << "NO" << endl;
        return;
    }

    if (third % first == 0) {
        cnt += ((third / first) - 1);
    } else {
        cout << "NO" << endl;
        return;
    }

    if (cnt <= 3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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