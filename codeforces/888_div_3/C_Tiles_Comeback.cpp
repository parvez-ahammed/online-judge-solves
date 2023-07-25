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
#define rep(start, x) for (int i = start; i < x; i++)


void solve()
{

    int n, k;
    cin >> n >> k;
    vi v(n +10);
    map <int , int> mp;

    rep(1, n + 1) cin >> v[i], mp[v[i]]++;


    int start = v[1];
    int end = v[n];

    if (start == end and mp[start] >= k)
        cout << "YES" << endl;

    else
    {

        int sik = 1, cnt_start = 0;

        for (sik = 1; sik <= n; sik++)

        {
            if (v[sik] == start)
                cnt_start++;
            mp[v[sik]]--;

            if (cnt_start == k)
                break;
        }

       
        if (mp[end] >= k)
            cout << "YES" << endl;
        else
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