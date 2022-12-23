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
    int a, b, a1, b1, a2, b2;
    cin >> a >> b >> a1 >> b1 >> a2 >> b2;

    if (a1 == a || b1 == a)
    {
        if (b == a1 || b == b1)
        {
            cout << 1<< endl;
            return;
        }
    }

    if (a2 == a || b2 == a)
    {
        if (b == a2 || b == b2)
        {
            cout << 2 << endl;
            return;
        }
    }

    cout << 0 << endl;
    return;
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
