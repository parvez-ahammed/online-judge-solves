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
    vll v(n);

    ll min_elem = INT_MAX;
    ll max_elem = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        min_elem = min(min_elem, v[i]);
        max_elem = max(max_elem, v[i]);
    }
    

  

    ll dances = 0;

    for (int i = 0 ; i < n -1 ; i++)
    {
        if (v[i] == v[i+1]) dances++;

    }

      cout << 1 << " " << max (min_elem,dances) << endl;
        
        

    
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