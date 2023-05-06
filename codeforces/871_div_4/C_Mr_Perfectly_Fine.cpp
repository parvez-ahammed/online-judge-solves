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

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    ll combined_min = INT_MAX;
    ll first_min = INT_MAX;
    ll second_min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        ll x;
        string ab;
        cin >> x >> ab;

        if (ab[0] == '1' && ab[1] == '1')
        {
         combined_min = min(combined_min , x);  
        }
        if (ab[0] == '1' && ab[1] == '0')
        {
           first_min = min(first_min , x);
        }
        if (ab[0] == '0' && ab[1] == '1')
        {
            second_min = min(second_min , x);
        }
        
    }

    ll final_min = min(combined_min , first_min + second_min);

    if (combined_min != INT_MAX && first_min != INT_MAX && second_min != INT_MAX)
    {
        final_min = min(combined_min , first_min + second_min);
    }
    

   
    if (final_min == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << final_min << endl;
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