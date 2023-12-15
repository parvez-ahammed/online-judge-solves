#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> v(n, 0), prefixSum(n + 1, 0);

    for (int i = 0; i < n; i++) {
        v[i] = (s[i] == '1');
    }

    for (int i = 1; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + v[i - 1];
    }

    int saidNo = 0;
    int saidYes = 0;

    for (int i = 0; i < n - 1; i++) {

        if (s[i] == '0')
            saidNo++;
        else {
            saidYes++;
        }
        if (s[i] == '0' or saidNo > 0) {
            cout << "NO" << endl;
        } else {
            cout << "IDK" << endl;
        }
    }

    saidYes += (s[n - 1] == '1');

    if (saidYes == n) {
        cout << "YES" << endl;
    } else
        cout << "NO" << endl;
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