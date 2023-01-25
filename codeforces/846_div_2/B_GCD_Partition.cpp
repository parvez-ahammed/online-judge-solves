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
    ll first_gcd = 0, second_gcd = 0, sum_1 = 1, sum_2 = 1;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (i == 0)
        {
            sum_1 += temp;
            continue;
        }

        
            if (__gcd(sum_1 + temp, sum_2) >= __gcd(sum_1, sum_2 + temp) )
            {
                sum_1 += temp;
            }
            else
                sum_2 += temp;
        
    }
    sum_1--;
    sum_2--;

    cout << __gcd(sum_1, sum_2) << endl;
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