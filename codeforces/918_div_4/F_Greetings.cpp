#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    multiset<int> s;
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        s.insert(v[i].second);
    }

    // for each element the answer will be the total element who have stated late and finished early

    sort(v.begin(), v.end());

    ll cnt = 0;

    for (int i = 0; i < n; i++) {

        int currDes = v[i].second;

        s.erase(s.find(currDes));

        int contribute = distance(s.begin(), s.upper_bound(currDes));



        cnt += contribute;
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