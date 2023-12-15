#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> v(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    // my target is to make a1 + a2 + a3 + ai-1 ... < ai
    // if such condition is achieved then we can say that ai is a safe index
    // have to rearrange to maximize the number of safe index
    sort(v.begin(), v.end());

    map<int, bool> mp;
    ll sum = v[0];
    mp[0] = true;
    int cursed = n - 1;

    for (int i = 1; i < n+1; i++) {
        int indice = upper_bound(v.begin(), v.end(), sum) - v.begin();

        if (indice == n) {
            break;
        }
        mp[indice] = true;
        sum += v[indice];
        cursed--;
    }
    cout << cursed << endl;

    for (int i = 0; i < n; i++) {
        if (mp[i]) {
            cout << v[i] << " ";
        }
    }

    for (int i = 0; i < n; i++) {
        if (!mp[i]) {
            cout << v[i] << " ";
        }
    }
    cout << endl;
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