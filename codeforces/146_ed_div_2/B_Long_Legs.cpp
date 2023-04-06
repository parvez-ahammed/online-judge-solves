#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};
#define BIG_MOD 1000000007
#define vi vector<int>
#define vll vector<ll>

int min_moves_robot(int a, int b) {
    int gcd = __gcd(a, b);
    int da = a / gcd, db = b / gcd;
    int moves = gcd + (da - 1) + (db - 1);
    return moves;
}


void solve()
{

    ll a , b;

    cin >> a >> b;

    ll c = min (a,b);
    ll d = max (a,b);

    a = c;
    b = d;

    if (a == b )
        cout << 2 * a << endl;
    else if (a == 1)
    {
        cout << 1 + floor(b/2.0) + 1 << endl;
    }

    else 
    {
        cout << ( a / 2.0) + (b/2.0)<< endl;
    }

   

   
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
