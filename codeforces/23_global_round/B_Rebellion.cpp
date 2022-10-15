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
    int n;

    cin >> n;

    int operations = 0;
    vector<int> v(n, 0);

    int break_points = 0;

    vector<int> vv;

    int total_inc = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (i >= 1 && v[i] < v[i - 1])
        {
            break_points += 1;
            vv.push_back(total_inc);
            total_inc = 0;
        }
        total_inc += 1;
    }
    vv.push_back(total_inc);

    SortR(vv);

    ll sum = 0;

    for (int i = 1; i < vv.size(); i++)
    {
        sum += vv[i];
        // cout << vv[i] << " ";
    }

      cout  << vv.size()<< endl;

    (vv.size()-1) % 2 == 0 ? cout << sum / (vv.size()-1) << endl : cout << sum / 2 << endl;

    
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