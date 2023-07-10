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

ll getVal(int x , int y , vector <vector<int>> &v)
{
    ll ans = 0;
    rep(0 , v.size())
    {
        for (int j = 0 ; j < v[i].size() ; j++)
        {
            abs(x - i) == abs(y - j) && abs(y - j) >= 0 ? ans += v[i][j] : ans += 0;
        }
    }
    return ans;
}

void solve()
{
    vector <vector<int>> v;
    int n , m  ;
    ll ans = -1;
    cin >> n >> m;

    vector < pair <int , int > > locs;
    for(int i = 0 ; i < n ; i++)
    {
        vector<int > temp;
        for (int j = 0 ; j < m ;j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
            locs.push_back({i , j});

        }
        v.push_back(temp);
    }

    rep(0, locs.size()) {
        ans = max(ans , getVal(locs[i].first , locs[i].second , v));
    }




    cout << ans << endl;


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