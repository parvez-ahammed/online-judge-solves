#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    vector<int> extra;
    vector<int> c(n + 1, -1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (c[a[i]] == -1)
            c[a[i]] = 1;
        else
            extra.push_back(a[i]);
    }

    sort(extra.begin(), extra.end());

    for (int i = 1; i <= n; i++) {

        if (c[i] == -1) {

            bool hasSmaller = false;
            for (int j = 0; j < extra.size(); j++) {
                if (extra[j] <= i) {
                    hasSmaller = true;
                    extra[j] = INT_MAX;
                    break;
                }
            }

            if (hasSmaller)
                c[i] = 1;
        }
    }

    int minusCnt = 0;

    for (int i = 1; i <= n; i++) {
        if (c[i] == -1) {
            minusCnt++;
        }
    }
    if (minusCnt == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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