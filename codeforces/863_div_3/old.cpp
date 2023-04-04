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
    int n;
    cin >> n;

    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2 || (n + 1 - x1 == x2) || (x1== y2 || (n + 1 - x1 == y2)))
    {

        //cout << "HIT X" << endl;
        cout << 0 << endl;
    }

    else
    {

        ll half = n /2;

       

        ll source_x_half = x1;
        ll source_y_half = y1;
        if ( x1 >= half)
        {
            source_x_half = x1 / 2;
        }
        if (y1 >= half)
        {
            source_y_half = y1 / 2;
        }
       

        ll dest_x_half = x2;
        ll dest_y_half = y2;
        if ( x2 >= half)
        {
            dest_x_half = x2 -half;
        }
        if (y2 >= half)
        {
            dest_y_half = y2 -half;
        }

        cout << "source_x_half " << source_x_half << endl;
        cout << "source_y_half " << source_y_half << endl;
        cout << "dest_x_half " << dest_x_half << endl;
        cout << "dest_y_half " << dest_y_half << endl;

        ll row_min = min(abs(source_x_half - dest_x_half), abs(source_y_half - dest_y_half));

        cout << row_min   << endl;


      

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