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

string modifyString(string str)
{
    int n = str.size();

    int stone = INT_MAX;

    for (int i = n - 1; i >= 0; i--)
    {
        // simple use of memoization
        /* The idea behind to store the stone index was to assume that nothing can fall to the blank space if there is a stone ahead . And we know it for sure that there wasnt any star as we initially set the stone to 100 which is larger than given range 50 , so if it is altered anywhere meaning that it couldnt find a star before this stone that can fall down
         */
        if (str[i] == '.' and i < stone)
        {

            for (int j = i - 1; j >= 0; j--)
            {
                if (str[j] == 'o')
                {
                    stone = j;
                    break;
                }

                if (str[j] == '*')
                {
                    swap(str[i], str[j]);
                    break;
                }
            }
        }
    }
    return str;
}

vector<string> transpose(vector<string> v)
{
    vector<string> strs;
    for (int i = 0; i < v[0].size(); i++)
    {
        string temp;
        for (int j = 0; j < v.size(); j++)
            temp += v[j][i];

        strs.push_back(temp);
    }

    return strs;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v(n, ""), modified;
    rep(0, n) cin >> v[i];

    v = transpose(v);

    for (int i = 0; i < v.size(); i++)
    {
        string t = modifyString(v[i]);
        // cout << t << endl;
        modified.push_back(t);
    }
    modified = transpose(modified);

    rep(0, n) cout << modified[i] << endl;

    //cout << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
