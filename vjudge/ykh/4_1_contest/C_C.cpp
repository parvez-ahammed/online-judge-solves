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

int desired = 0;


void solve()
{

    ll k, n;
    cin >> k >> n;

    desired = n;

    cout << k << " ";
    if (n == 1)
    {
        cout << "1/1" << endl;
        return;
    }
    int level = floor(log2(n)) + 1;
    int down_1_level = level - 1;
    int to_find = n - ((1 << down_1_level) - 1);
    int width = (1 << down_1_level);
    int half_width = width / 2;

    // cout << "LEVEL " << level << " " << to_find << " WIDTH " << width << " HALF WIDHT " << half_width ;

    vector<pair<ll, ll>> level_ends;
    level_ends.push_back({0, 0});
    level_ends.push_back({1, 1});
    level_ends.push_back({1, 2});

    for (int i = 3; i <= 1000; i++)
    {
        auto prev = level_ends[i - 1];
        level_ends.push_back({prev.first + prev.second, prev.second});
    }

    if (to_find > half_width)
    {
        to_find = width - to_find + 1;
    }
    // cout << " FiRST HALF " << level_ends[level].first << " " << level_ends[level].second << " TO FIND " << to_find << " ";

    int from_last = half_width - to_find + 1;

    // cout << from_last << endl;

    auto current_pair = level_ends[level];
    int indice = 1;
    auto ans = current_pair;

    while (indice < from_last)
    {
       
        if (indice % 2 == 1)
        {
            ans.first = current_pair.first - current_pair.second;
            ans.second = current_pair.first ;
        }
        else
        {
            // have to go up till I find the first element and then choose the right at first and then go down left word

            
            cout << level_ends[2].first << " " << level_ends[2].second<< endl;
        }
        
        indice++;
    }
    cout << ans.first << "/" << ans.second << endl;
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