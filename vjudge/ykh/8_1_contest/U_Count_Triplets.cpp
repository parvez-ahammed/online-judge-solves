#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, r;
    cin >> n >> r;
    vector<int> v(n);

    map<ll, int> mp_right, mp_left;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp_right[v[i]]++;
    }

    ll cnt = 0;

    for (int i = 0; i < n; i++) {
        // int first value of triplet
        int mid = v[i];
        mp_right[mid]--;
        if (v[i] % r != 0) {
            mp_left[v[i]]++;
            continue;
        }

        int left = v[i] / r;
        ll right =1ll * v[i] * r;

        cnt += (ll)mp_left[left] * mp_right[right];

        mp_left[v[i]]++;
    }

    cout << cnt << endl;
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