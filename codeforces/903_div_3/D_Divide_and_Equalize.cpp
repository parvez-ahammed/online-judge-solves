#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int N;

    cin >> N;

    vector<int> v(N + 1);

    for (int i = 1; i <= N; i++) {
        cin >> v[i];
    }

    bool allSame = true;

    for (int i = 2; i <= N; i++) {
        if (v[i] != v[i - 1]) {
            allSame = false;
            break;
        }
    }

    if (allSame) {
        cout << "YES" << endl;
        return;
    }

    map<int, int> mp;

    for (int i = 1; i <= N; i++) {

       

        int x = v[i];

        for (int j = 2; j * j <= x; j++) {

            int cnt = 0;

            while (x % j == 0) {

                x /= j;

                mp[j]++;
            }
        }

        if (x > 1) {
            mp[x]++;
        }
    }

    bool flag = true;

 
    for (auto it : mp) {

        //cout << it.first << " " << it.second << endl;

        if (it.second % N != 0) {
            flag = false;
        }
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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