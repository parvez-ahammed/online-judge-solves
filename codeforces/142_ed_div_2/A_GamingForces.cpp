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


    int count_1 = 0;

    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;

        if (temp == 1)
            count_1++;
    }

    if (count_1 != 0)
    {
        if (count_1 % 2 == 0)
            cout << (count_1 / 2) + (n - count_1) << endl;
        else
            cout << (count_1 / 2) + 1 + (n - count_1) << endl;
    }
    else
    {
        cout << n << endl;
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