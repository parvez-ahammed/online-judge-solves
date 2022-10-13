#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
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
    ll n;
    cin >> n;
    vector<ll> v(n, 0);
    cin.sync();

    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll sum = 0;

    int prev_i = 0, prev_j = 0;

    int curr_n = 0;

    int max_possible = n * 2;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        int temp_var = (i + 1) * 2;
        if (sum < temp_var && i >= 1)
        {
            for (int j = i; i + j > (prev_j + prev_i);)
            {
                if (__gcd(v[i], v[j]) == 1)
                {
                    //   cout << "HIT " << v[i] << " " << v[j] << " " << j  << i << endl;
                    sum < (i + j + 2) ? sum = i + j + 2 : sum = sum;
                    prev_i = i;
                    prev_j = j;
                }
                curr_n++;
                j--;
            }
        }
        else if (sum != 0)
            break;

        curr_n++;
    }

    sum != 0 ? cout << sum << endl : cout << "-1" << endl;

    // cout << curr_n << endl;
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