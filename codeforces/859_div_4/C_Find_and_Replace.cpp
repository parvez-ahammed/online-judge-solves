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

    int n;
    cin >> n;
    string str;
    cin >> str;

    bool possible = true;

    vector<vector<int>> vv;

    for (auto ch = 'a'; ch <= 'z'; ch++)
    {

        // cout << ch << endl;
        vector<int> pos;
        pos.push_back(0);
        for (int i = 0; i < n; i++)
        {

            if (str[i] == ch)
                pos.push_back(i);
        }

        bool even = false;

        if (pos.size() >= 2)
        {
            if (pos[1] == 0)
                even = true;
            else if (pos[1] % 2 == 0)
                even = true;
        }

        for (int i = 2; i < pos.size(); i++)
        {

            if (even)
            {
                if (pos[i] % 2 != 0)
                {
                    cout << "NO" << endl;
                    return;
                }
                //cout << pos[i] << " ";
            }
            else
            {

                if (pos[i] % 2 != 1)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }

        //cout << endl;
    }

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