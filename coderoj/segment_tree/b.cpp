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
    int n, q;
    cin >> n >> q;

    vector<int> v;
    int sum = 0;
    v.push_back(sum);

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
        v.push_back(sum);
    }

    for (int i = 0 ; i < q; i++)
    {
        int l ,r;

        cin >>  l >> r;

        cout << v[r] - v[l-1] << endl;
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    int i = 1;
    while (tc--)
    {
        cout << "Case " << i << ":" << endl;
        solve();
        i++;

    }
    return 0;
}