#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n, m;

    cin >> n >> m;

    string x, s;

    cin >> x >> s;

    int cnt = 0;

    int iterations = 110;

    while (iterations--) {

    

        if (x.find(s) != string::npos) {
            cout << cnt << endl;
            return;
        }

        if (x.size() > 200) {
            break;
        }

        x += x;
        cnt++;
    }

    cout << -1 << endl;
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