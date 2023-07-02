#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"

ll fact(ll n )
{
    if (n == 1 ) return 1;
    return n * fact(n-1);
} 

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    cout << fact(n) << endl;
    return 0;
}