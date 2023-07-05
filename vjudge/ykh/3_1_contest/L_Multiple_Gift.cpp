#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, y;
    cin >> x >> y;

    ll cnt = 1 , ans = x;

    while ((ans << 1) <= y)
    {
        cnt++;
        ans <<= 1;
    }

   

    cout << cnt << endl;
    return 0;
}