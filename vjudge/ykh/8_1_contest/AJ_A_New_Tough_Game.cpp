
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n;
    cin >> n;
    string ans;
    string match = "";
    for (int i = 0; i < n; i++) {
        match += 'a';
    }
    int first;

    cout << "? " << match << endl;
    cin >> first;

    for (int i = 0; i < n; i++) {

        match[i] = 'z';
        cout << "? " << match << endl;
        int curr;
        cin >> curr;
        int pos = (first - curr + 25) / 2;
        ans += 'a' + pos;
        match[i] = 'a';
    }
    cout << "! " << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}