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

    string str;
    cin >> str;

    map<char, int> mp;

    for (int i = 0; i < str.size(); ++i)
        mp[str[i]]++;
    

    if (str.size() % 2 == 1 )
    {
        if (mp.size() > 2)
            cout << "YES" << endl;
        else if (mp.size() == 2)
        {
        
            int len = str.size() / 2;

          

            if (mp[str[len]] > 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        } 
    }
    else if (str.size() % 2 == 0 && mp.size() > 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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