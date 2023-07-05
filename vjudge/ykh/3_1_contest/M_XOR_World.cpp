#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

ll xor0toN(ll n)
{
    ll ans = 0;
    while (n >= 0 and n % 4 != 3 )
    {
        ans ^= n;
        n--;
    }
    return ans;
}

ll xor_l_to_r(ll l , ll r)
{
    return ((  l  > 0 ? xor0toN(l - 1) : 0) ^ xor0toN(r));
}
int main()
{
    ll A, B;

    cin >> A >> B;

    cout << xor_l_to_r(A,B) << endl;

    return 0;
}
