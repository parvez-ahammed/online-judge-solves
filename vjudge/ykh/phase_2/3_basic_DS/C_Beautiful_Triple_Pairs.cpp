#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

   
    map<tuple<int, int, int>, int> mp;
    map<pair<int, int>, int> pair1, pair2, pair3;

    for (int j = 0; j < n - 2; j++) {
        int b1 = a[j];
        int b2 = a[j + 1];
        int b3 = a[j + 2];


        mp[{ b1, b2, b3 }]++;
        pair1[{ b2, b3 }]++;
        pair2[{ b1, b3 }]++;
        pair3[{ b1, b2 }]++;
    }

    

    ll ans = 0;

    for (auto x : mp) {
        int b1 = get<0>(x.first);
        int b2 = get<1>(x.first);
        int b3 = get<2>(x.first);

        ll cnt = mp[{ b1, b2, b3 }];

        auto firstCheck = make_pair(b2, b3);
        auto secondCheck = make_pair(b1, b3);
        auto thirdCheck = make_pair(b1, b2);

        
        pair1[firstCheck] -= cnt;
        pair2[secondCheck] -= cnt;
        pair3[thirdCheck] -= cnt;

        ll freq = 0;

        freq += (1LL * pair1[firstCheck] * cnt);
        freq += (1LL * pair2[secondCheck] * cnt);
        freq += (1LL * pair3[thirdCheck] * cnt);

        ans += freq;

     
    }

    cout << ans << endl;
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