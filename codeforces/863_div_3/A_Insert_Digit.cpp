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

    int d1;
    char d2;
    cin >> d1 >> d2;
    string n;
    cin >> n;

    vector<int> v(n.size() + 1, 0);

    int initial_min = INT_MAX;

    for (int i = 0; i < n.size(); i++)
    {
        v[i] = min(initial_min, n[i] - '0');
        initial_min = v[i];
    }
    int position = 0;

    // cout << d2  << endl;
    // for (int i = 0; i < n.size(); i++)
    // {
       
    //     cout << v[i] << " ";
    // }

     for (int i = v.size() -1; i > 0; i--)
    {

        if ( d2 - '0'  <= v[i-1] &&  d2-'0' >= v[i])
        {
            position = i;
            break;
        }
       
        
    }

    //cout << " position is " << position<< endl;
    n.insert(position, 1, d2);

    cout << n << endl;
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