#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;

    cin >> n >> k;

    vector<ll> v(n + 1, 0);

    map<int, vector<int>> mp;

    for (ll i = 1; i <= n; i++) {
        cin >> v[i];
        mp[v[i]].push_back(i);
    }

    sort(v.begin(), v.end());


    for (int i = 1; i <= n; i++) {

        int l = i+1, r = n;

        while (l < r) {

            if (v[l] + v[r] + v[i] == k) {

                if (v[l] == v[r] && v[r] == v[i]) {

                    if (mp[v[i]].size() >= 3) {
                        cout << mp[v[i]][0] << " " << mp[v[i]][1] << " " << mp[v[i]][2] << endl;
                        return 0;
                    }
                }
                else if (v[l] == v[r]) {

                    if (mp[v[l]].size() >= 2) {
                        cout << mp[v[l]][0] << " " << mp[v[l]][1] << " " << mp[v[i]][0] << endl;
                        return 0;
                    }
                }
                else if (v[l] == v[i]) {

                    if (mp[v[l]].size() >= 2) {
                        
                        cout << mp[v[l]][0] << " " << mp[v[l]][1] << " " << mp[v[r]][0] << endl;
                        return 0;
                    }
                }
                else if (v[r] == v[i]) {

                    if (mp[v[r]].size() >= 2) {
                       
                        cout << mp[v[r]][0] << " " << mp[v[r]][1] << " " << mp[v[l]][0] << endl;
                        return 0;
                    }
                }
                else {
                    
                    cout << mp[v[i]][0] << " " << mp[v[l]][0] << " " << mp[v[r]][0] << endl;
                    return 0;
                }
            }
            else if (v[l] + v[r] + v[i] < k) {
                l++;
            }
            else {
                r--;
            }
        }
    }



    cout << "IMPOSSIBLE" << endl;

    return 0;
}