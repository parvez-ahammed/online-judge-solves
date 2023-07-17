#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

ll factorialN(ll  l , ll r)
{

    if (r== 0 or r == 1) return 1;
    if (l == r) return l;
    return r * factorialN(l , r-1);

    
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r;
    cin >> n >> r;

    if (r == 0 || n ==0 || n <= r)
    {
        cout << 1 << endl;
        return 0;
    }

   
    ll facNminsR = factorialN(max (n-r  , r)+1 ,n);
    ll facR = factorialN(1 ,min  (n-r  , r));
  


    cout << facNminsR /facR  << endl;

    return 0;
}