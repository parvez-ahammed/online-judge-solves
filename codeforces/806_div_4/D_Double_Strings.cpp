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

void solve()
{
    int n;
    cin >> n;

    vector<string> v(n);
    map<string, int> mp;
    rep(0, n) cin >> v[i], mp[v[i]]++;

    //cout << "HELLO" << endl;

    rep(0, n)
    {
        bool possible = false;
        //cout << "FOR " << v[i] << endl;
        for (int j = 1; j <= v[i].size(); j++)
        {
            string main_string = v[i];
            string first_part = "";
            string second_part = "";

            for (int k = 0; k < j; k++)
                first_part += main_string[k];
            for (int k = j; k < main_string.size(); k++)
                second_part += main_string[k];
            //cout << first_part << " " << second_part << endl;

            if (mp.count(first_part) > 0 && mp.count(second_part) > 0)
            {
                possible = true;
                break;
            }
        }

        possible ? cout << 1 : cout << 0;
    }

    cout << endl;
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