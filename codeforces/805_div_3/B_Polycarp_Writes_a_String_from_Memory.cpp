#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    string str;
    cin >> str;

    set<char> s;

    int n = str.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {

        s.insert(str[i]);

        //cout << str[i];

        if (s.size() > 3) {
            s.clear();
            s.insert(str[i]);
            cnt++;

            //cout << endl;
        }
    }

    if (s.size() != 0)
        cnt++;

    cout << cnt << endl;
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