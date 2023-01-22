#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl ""
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
    int f, s;
    cin >> f >> s;

    int count_sum = 0;

    for (int i = 0; i <= f; i++)
    {
        if (i > s)
            break;
        for (int j = 0; j <= f; j++)
        {
            if (i + j > s)
                break;

            if (i + j <= s && (s - (i + j)) <= f)
                count_sum++;
        }
    }

    cout << count_sum << endl;
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