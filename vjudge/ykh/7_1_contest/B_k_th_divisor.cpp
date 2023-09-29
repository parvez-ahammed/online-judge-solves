#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

ll kthDivisor(ll n, int k)
{

    // if I am finding divisor of a LL number than the highest divisor will be of long long 
    vector<ll> v;
    for (int i = 1; (i * 1ll * i) <= n; i++) {

        if (n % i == 0) {
            v.push_back(i);
            if (i != (n / i))
                v.push_back(n / i);
        }
    }



    sort(v.begin(), v.end());

    

     if (v.size() < k)
        return -1;

    return v[k - 1];
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    int k;

    cin >> n >> k;

    cout << kthDivisor(n, k) << endl;

    return 0;
}