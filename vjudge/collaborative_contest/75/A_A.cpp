#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    string number;

    int n ;

    cin >> n >> number;

    int pos = -1;

    int sz = number.size();

    for (int i = 0; i < sz; i++) {
        if (number[i] == '8') {
            pos = i;
            break;
        }
    }

    int len = sz - pos;

    if (pos == -1 or len < 11) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}