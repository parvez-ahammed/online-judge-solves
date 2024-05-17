#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;

    if ((p1 + p2 + p3) % 2 != 0) {
        cout << -1 << endl;
        return;
    }
    int game = 0;
    while (p1 and (p2 != p3)) {
        game++;
        p1--;
        p3--;
    }


    game += p1;
    p2 -= (p1 / 2);
    p3 -= (p1 / 2);

    game += min(p2 , p3);

    cout << game << endl;
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

// 3 4 5
// 3 4 5
// 0 3 3 --> 3
