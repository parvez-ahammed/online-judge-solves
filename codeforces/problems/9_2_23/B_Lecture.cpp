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

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> v(n);

    for (int i = 0; i < m; i++)
    {
        string temp1, temp2;
        cin >> temp1 >> temp2;
        v.push_back({temp1, temp2});
    }

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j].first == temp)
            {
                if (v[j].first.size() > v[j].second.size())
                    cout << v[j].second << " ";
                else
                    cout << v[j].first << " ";
            }
        }
    }

    cout << endl;
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