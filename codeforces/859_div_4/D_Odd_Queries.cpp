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
#define BIG_MOD 1000000007
#define vi vector<int>
#define vll vector<ll>

void solve()
{

    ll n, q;
    cin >> n >> q;

    ll temp;
    vll sum(n + 1, 0);
    ll total_sum = 0;

    for (ll i = 1; i <= n; i++)
    {
        cin >> temp;
        total_sum += temp;
        sum[i] = total_sum;
    }

    for (int i = 0; i < sum.size(); i++)
        cout << sum[i] << " ";
    cout << endl;

    // cout << total_sum << endl;

    for (int i = 0; i < q; i++)
    {

        ll l, r, k;

        cin >> l >> r >> k;

        ll curr_sum = ((r - l) + 1) * (ll)k;
        // cout << curr_sum << endl;

        ll last_ind = l - 1;

        ll old_sum = sum[r] - sum[last_ind];

        // cout << old_sum << endl;
        ll total_old_sum = total_sum - old_sum;

        if (total_old_sum == 0)
        {
            if (curr_sum % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if ((total_old_sum % 2 == 0 && curr_sum % 2 == 0) || (total_old_sum % 2 == 1 && curr_sum % 2 == 1))
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
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