#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;

    cin >> n >> q;

    vector<ll> v(n + 1, 0);

    // input
    for (ll i = 1; i <= n; i++) {
        cin >> v[i];
    }

    vector<ll> diff(n + 2, 0);

    // offline query saving
    vector<pair<int, int>> queries;

    while (q--) {

        int l, r;

        cin >> l >> r;

        diff[l]++;
        diff[r + 1]--;
        queries.push_back({ l, r });
    }


    // calculating prefix sum
    for (int i = 1; i <= n; i++) {
        diff[i] += diff[i - 1];
    }


    // sorting the queries in descending order of their frequency
    vector<pair<int, int>> pos;
    for (int i = 1; i <= n; i++) {
        pos.push_back({ diff[i], i });
    }
    sort(pos.rbegin(), pos.rend());


    // placing the elements of the array 
    sort(v.begin(), v.end());
    vector<ll> ans(n + 1, 0);

    for (int i = 0; i < n; i++) {
        ans[pos[i].second] = v[n - i];
    }


    // calculating the prefix sum of the array
    vector<ll> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + ans[i];
    }



    // finding the sum finally
    ll sum = 0;
    for (int i = 0; i < queries.size(); i++) {
        sum += (pref[queries[i].second] - pref[queries[i].first - 1]);
    }
    cout << sum << endl;

    return 0;
}



