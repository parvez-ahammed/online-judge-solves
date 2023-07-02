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

    vector<int> even;
    vector<int> odd;
    int temp;
    int ones = 0;
    ll res = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        temp % 2 == 0 ? even.push_back(temp) : odd.push_back(temp);

        if (temp == 1)
            ones++;
        else if (temp % 2 == 1)
            res *= temp;
    }
    int even_size = even.size();
    int size = min(even_size, ones);
    ll mod_val = 998244353;

    for (int i = 0; i < size; i++)  even[i]++; 
    

    for (int i = 0; i < size; i++)
    {
        res *= even[i];

    }


    cout << res % mod_val<< endl;
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