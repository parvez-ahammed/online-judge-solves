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
    int n;
    cin >> n;
    vi v(n + 1);
    vector<pair<int, int>> validI;
    rep(1, n + 1)
    {
        cin >> v[i];
        if (i > v[i])
            validI.push_back({v[i], i});
        
    }

    Sort(validI);
    vi val;
    val.push_back(0);
    
    rep(0,validI.size()) val.push_back(validI[i].first);


    ll cnt = 0;
    int valSize = val.size();
    rep(0, validI.size())
    {
       
        int checkValue = max(validI[i].first, validI[i].second);
        int start = upper_bound(val.begin()   , val.end()  , checkValue) - val.begin();

        cnt += valSize - start;
    }

    cout << cnt << endl;
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




// #define ll long long int
// #define endl "\n"
// #define llu unsigned long long int
// #define Sort(x) sort(x.begin(), x.end())
// #define SortR(x) sort(x.begin(), x.end(), greater<int>())
// #define Reverse(x) reverse(x.begin(), x.end())
// #define sq(x) (x) * (x)
// #define mid(l, r) (l + (r - l) / 2)
// #define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
// int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
// int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};
// #define BIG_MOD 1000000007
// #define vi vector<int>
// #define vll vector<ll>
// #define rep(start, x) for (int i = start; i < x; i++)

// void solve()
// {
//     int n;
//     cin >> n;
//     vi v(n + 1) , val;
//     vector<pair<int, int>> validI;
//     rep(1, n + 1)
//     {
//         cin >> v[i];
//         if (i > v[i])
//             validI.push_back({v[i], i});
        
//     }

//     Sort(validI);
//     validI.insert(validI.begin()  ,  {0,0});
//     val.push_back(0);
    
//     rep(0,validI.size()) val.push_back(validI[i].first);


//     ll cnt = 0;
//     int valSize = validI.size();
//     rep(1, validI.size())
//     {
       
//         int checkValue = max(validI[i].first, validI[i].second);

//         cout << "{ "<<validI[i].first << " , " << validI[i].second  << " }," << endl;


        
//         int start = upper_bound(validI.begin()   , validI.end()  , make_pair(2,2)) - validI.begin();

//         cout  << checkValue << " " << start << endl;
//         //cout << endl;

//         cnt += valSize - start;
//     }

//     cout << cnt << endl;
// }

// int32_t main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tc = 1;
//     cin >> tc;
//     while (tc--)
//     {
//         solve();
//     }
//     return 0;
// }
