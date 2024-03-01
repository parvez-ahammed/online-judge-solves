#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    map<int, int> divisorCount;

    for (int i = 1; i <= n; i++) {
        if (a[i] != 0) {

            for (int j = 1; j * j <= a[i]; j++) {
                if (a[i] % j == 0) {
                    divisorCount[j]++;
                    if (j != a[i] / j) {
                        divisorCount[a[i] / j]++;
                    }
                }
            }
        }
    }

    

    ll sum = 0;

    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        if (a[i] == 0) {
            cnt += (n - i );
        } else {
            // remove the occurances of divirsor of a[i]
            vector<int> divisors;
            for (int j = 1; j * j <= a[i]; j++) {
                if (a[i] % j == 0) {
                    divisors.push_back(j);
                    if (j != a[i] / j) {
                        divisors.push_back(a[i] / j);
                    }
                }
            }
            for (auto j : divisors) {
                divisorCount[j]--;
                //cout << j << " --- " << divisorCount[j] << endl;
                if (j !=1)
                cnt += divisorCount[j];
            }
            
        }

        cout << cnt << " ";
        sum += cnt;
    }

    cout << sum << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}