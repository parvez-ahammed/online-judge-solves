#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

ll B, P, M;

int bexpo(ll x, ll n, ll mod)
{
    __int128 ans = 1 % mod; // if mod = 1 then ans = 0
    while (n > 0)
    {
        // if n is odd or the last bit is 1
        if (n & 1)
        {
            // because any number can be made in the sum of powers of 2
            ans = ans * x % mod;
        }

        x = (x * x) % mod;
        n >>= 1;
    }
    return ans;
}

void solve()
{   
    // B^P % M
    // All long long 
    cout << bexpo(B, P, M) << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;

    while (cin >> B >> P >> M)
    {
        solve();
    }
    return 0;
}