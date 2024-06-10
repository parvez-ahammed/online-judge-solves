#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    set<int> s;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
        mp[a[i]]++;
    }

    if (s.size() == 1) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    string str(n, '0');
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (mp[a[i]] > 1) {
            str[i] = 'R';
            found = true;
            break;
        }
    }

    if (!found) {
        str[0] = 'R';
    }

    for (int i = 0; i < n; i++) {
        if (str[i] != 'R')
            str[i] = 'B';
    }

    cout << str << endl;
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