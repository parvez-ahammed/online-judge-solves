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

bool sortByVal(const pair<string, int> &a,
               const pair<string, int> &b)
{
    return (a.second > b.second);
}

vector<pair<string, int>> sortMap(map<string, int> given_map)

{

    vector<pair<string, int>> vec;
    map<string, int>::iterator it2;
    for (it2 = given_map.begin(); it2 != given_map.end(); it2++)
    {
        vec.push_back(make_pair(it2->first, it2->second));
    }

    sort(vec.begin(), vec.end(), sortByVal);

    return vec;
}

void solve()
{

    int n;
    cin >> n;

    map<string, int> counter;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        counter[temp]++;
    }

    vector<pair<string, int>> sortedVector = sortMap(counter);

    cout << sortedVector[0].first << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}