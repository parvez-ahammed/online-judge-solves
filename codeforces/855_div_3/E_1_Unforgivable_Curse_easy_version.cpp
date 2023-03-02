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

vector<int> countLowercaseOccurance(string str)
{
    vector<int> count(26, 0);
    for (int i = 0; i < str.length(); i++)
        count[str[i] - 'a']++;
    return count;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;
    vector<int> countS = countLowercaseOccurance(s);
    vector<int> countT = countLowercaseOccurance(t);

    for (int i = 0; i < 26; i++)
    {
        if (countS[i] != countT[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    int noOfSwaps = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {

            for (int j = i + 1; j <= min(i + k, n - 1); j++)
            {
                if (s[j] == t[i])
                {
                    // cout << "HIT" << endl;
                    // cout << s << endl;
            
                    swap(s[j], s[i]);
                    // cout << s << endl;
                    break;
                }
            }
        }
    }

    // cout << noOfSwaps << endl;

    if (s != t)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
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