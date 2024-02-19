#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    string str;
    cin >> str;

    int cnt = 0;

    int last = 0;
    for (int i = 0; i < n-1; i++) {

        if (str[i] == '*' && str[i + 1] == '*') {
            break;
        }

        cnt +=(str[i] == '@');
        last = i;
    }

    if (last == n-2)
        cnt += (str[n-1] == '@');

    cout << cnt << endl;
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