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

    ll n;
    cin >> n;

    ll lane = ceil(sqrt(n * 1.0));

    ll lane_start = (lane - 1) * (lane - 1) + 1;
    ll lane_end = lane * lane;

    ll col = 0, row = 0;

    // cout << n << " " << lane_end - lane << "  " << lane_end << endl;
    if (n > lane_end - lane && n <= lane_end)
    {
        row = lane;
        col = abs(lane_end - n) + 1;
    }
    else
    {
        col = lane;
        row = abs(lane_start - n) + 1;
    }

    if (lane % 2 != 1)

        swap(row, col);

    cout << col << " " << row;
}

int32_t main()
{

    // Printing the Output to output.txt file

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;

    int i = 1;
    while (tc--)
    {

        cout << "Case " << i++ << ": ";
        solve();

        cout << endl;
    }
    return 0;
}
