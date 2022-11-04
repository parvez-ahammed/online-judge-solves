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

int GcdOfArray(vector<int> &arr, int idx)
{
    if (idx == arr.size() - 1)
    {
        return arr[idx];
    }
    int a = arr[idx];
    int b = GcdOfArray(arr, idx + 1);
    return __gcd(
        a, b); // __gcd(a,b) is inbuilt library function
}

void solve()
{

    // __gcd(6, 20)
    int n;
    cin >> n;
    vector<int> v(n + 1);
    vector<int> gcd_v(n + 1);
    vector<int> cost_v(n + 1);
    ll min_el = 10e9;
    vector<int> divi(1000);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    int curr_gcd = 0;

    int curr_cost = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            vector<int> temp_v = v;
            temp_v[i] = __gcd(v[i], i);

            curr_gcd = GcdOfArray(temp_v, 0);

            if (curr_gcd == 1)
            {
                curr_cost = n-i+1;
                break;
            }
        }
        if (curr_gcd == 1)
        {
            break;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << gcd_v[i] << " ";
    }
    // cout << endl;

    // for (int i = 1; i <= n; i++)
    // {

    //     cout << cost_v[i] << " ";
    // }
    // cout << endl;
    // for (int i = 1; i <= 10; i++)
    // {

    //     cout <<  divi[i] << " ";
    // }
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