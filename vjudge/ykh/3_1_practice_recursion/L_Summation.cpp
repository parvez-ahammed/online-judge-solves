#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

ll sum(vector<ll> v, int left, int right, ll curr)
{

    if (left == right)
        return v[left];
    else
    {
        int mid = (left + right) / 2;
        return sum(v, left, mid, curr) + sum(v, mid + 1, right, curr);  
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> v(n);
    rep(0, n) cin >> v[i];

    ll curr = 0;

    cout << sum(v, 0, n - 1, curr) << endl;
    return 0;
}