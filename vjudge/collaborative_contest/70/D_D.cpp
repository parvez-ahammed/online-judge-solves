#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int cnt = 0;

    map<int, int> mp;

    for (int i = 0; i < n; i++) {

        int val = v[i];

        if (mp[val] == 0) {
            cnt++;
            mp[val]++;
        }

        mp[val]--;
        mp[val - 1]++;
    }

    cout << cnt << endl;

    return 0;
}