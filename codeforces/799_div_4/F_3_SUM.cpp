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
#define rep(start, x) for (int i = start; i < x; i++)

bool solve()
{
    int n;
    cin >> n;
    vi v(n);
    map<int, int> mp;
    rep(0, n) cin >> v[i], v[i] %= 10, mp[v[i]]++;

    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {

            int sum = i + j;
            int k = 0;

            if (3 - sum >= 0 && 3 - sum <= 9)
                k = 3 - sum;
            else if (13 - sum >= 0 && 13 - sum <= 9)
                k = 13 - sum;
            else if (23 - sum >= 0 && 23 - sum <= 9)
                k = 23 - sum;

            if ((i + j + k) % 10 == 3)
            {

                if (i == j && j == k && mp[i] >= 3)
                    return true;

                if (i == j && i != k && (mp[i] >= 2 && mp[k] >= 1))
                    return true;

                if (i == k && i != j && (mp[i] >= 2 && mp[j] >= 1))
                    return true;

                if (j == k && i != k && (mp[j] >= 2 && mp[i] >= 1))
                    return true;

                if (i != j && i != k && j != k && (mp[i] >= 1 && mp[j] >= 1 && mp[k] >= 1))
                    return true;
            }
        }
    }

    return false;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        if (solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}