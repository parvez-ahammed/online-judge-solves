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

void solve()
{

    ll n, k;
    cin >> n >> k;


    bool even_possible =false;

    if ( ((n - ((k - 1) * 2)) % 2 == 0) && ((n - ((k - 1) * 2)) > 0 ))
    even_possible = true;

  
    bool odd_possible = false;


    if ((n - (k - 1)) % 2 == 1 &&  (n - (k - 1)) > 0)
        odd_possible = true;

    if (even_possible || odd_possible)
    {

        cout << "YES" << endl;

        if (even_possible)
        {

          
            for (int i = 0; i < k - 1; i++)
            {
                cout << 2 << " ";
            }
            cout << n - ((k - 1) * 2) << endl;
        }

        else
        {
            for (int i = 0; i < k - 1; i++)
            {
                cout << 1 << " ";
            }
            cout << n - (k - 1) << endl;
        }
        cout << endl;

    }
        
    else
        cout << "NO" << endl;
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