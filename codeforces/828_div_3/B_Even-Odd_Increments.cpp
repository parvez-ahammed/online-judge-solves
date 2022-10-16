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
    ll n, q;
    cin >> n >> q;

    ll even_sum = 0;
    ll odd_sum = 0;
    ll temp = 0;
    ll odd_count = 0, even_count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp % 2 == 0)
        {
            even_sum += temp;
            even_count++;
        }
        else
        {
            odd_sum += temp;
            odd_count++;
        }
    }

    ll type, x;

    // cout << "BEFORE SUM " << even_sum << " " << odd_sum << endl;
    // cout << "BEFORE COUNT " << even_count << " " << odd_count << endl;

    for (int i = 0; i < q; i++)
    {
        cin >> type >> x;

        if (type == 0 && x % 2 == 0)
            even_sum += (x * even_count);
        else if (type == 0 && x % 2 != 0)
        {
            odd_sum += even_sum + (x * even_count);
            odd_count += even_count;
            even_count = 0;
            even_sum = 0;
        }
        else if (type == 1 && x % 2 != 0)
        {
            even_sum += odd_sum + (x * odd_count);
            even_count += odd_count;
            odd_count = 0;
            odd_sum = 0;
        }
        else
            odd_sum += (x * odd_count);

        cout << even_sum + odd_sum << endl;
        // cout << "EVEN COUNT  = " << even_count << " ODD COUNT " << odd_count << endl;
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
