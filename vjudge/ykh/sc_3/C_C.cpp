#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
set<int> s;


int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    int n = str.size();



    for (int i = 0; i < n; i++) {
        int val = str[i] - '0';
        s.insert(val);
    }

    vector<int> v;
    for (auto it : s) {
        v.push_back(it);
    }

    int sz = v.size();
    int ans = v[0];

    for (int i = 0; i < sz; i++) {
        ans = __gcd(ans, v[i]);
    }

    cout << ans << endl;

    return 0;
}