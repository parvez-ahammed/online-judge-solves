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

void solve()
{
    ll n, k;
    cin >> n >> k;

    string str;
    cin >> str;

    vector<int> va(26, 0);

    // write a code to count the frequency of lowercase  character only
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            va[str[i] - 'a']++;
        }
    }

    vector<int> vA(26, 0);

    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            vA[str[i] - 'A']++;
        }
    }

    vector<int> v0(26, 0);

    for (int i = 0; i < 26; i++)
    {
        v0[i] = min(va[i], vA[i]);
        va[i] -= v0[i];
        vA[i] -= v0[i];
    }

    ll already_pair = 0;

    for (int i = 0; i < 26; i++)
    {
        already_pair += v0[i];
    }

    //cout << already_pair << endl;
    //
    ll can_be_pair = 0;

    for (int i = 0; i < 26; i++)
    {

        if (va[i] >= 2)
        {
            can_be_pair += va[i] / 2;
        }
        else if (vA[i] >= 2)
        {
            can_be_pair += vA[i] / 2;
        }
    }

  

    cout << already_pair + min(can_be_pair, k) << endl;
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