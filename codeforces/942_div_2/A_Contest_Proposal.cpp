#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int cnt = 0;

    while (true) {

        bool flag = true;

        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                flag = false;
                break;
            }
        }

        if (flag) {
            break;
        }
        a.insert(a.begin(), 1);
        cnt++;
        sort(a.begin(), a.end());
        a.pop_back();
    }

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