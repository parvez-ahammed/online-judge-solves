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




bool can_make_pile(ll smaller , ll larger, ll m) {

    if (m == smaller) {
        return true;
    }
    else if (m == larger)
    {
        return true;
    }

    bool from_smaller_pile = false;
    if (smaller % 3 == 0)
    {
         from_smaller_pile = can_make_pile(smaller/3, 2 * (smaller/3),m);

         if (from_smaller_pile) {
             return true;
         }
    }

    bool from_larger_pile = false;
    if (larger % 3 == 0)
    {
        from_larger_pile = can_make_pile(larger/3, 2 * (larger/3),m);

        if (from_larger_pile) {
            return true;
        }
    }

    return false;

    
    
}

void solve()
{

    ll n, m;
    cin >> n >> m;
    if (n == m) {
        cout << "YES" << endl;
        return;
    }

    if (n % 3 != 0) {
        cout << "NO" << endl;
        return;
    } 

 
    

    if (can_make_pile(n/3, 2 * (n/3), m)  ) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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