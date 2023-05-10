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

bool isValid(int i, int n)
{
    return (i >= 0 && i < n);
}

void solve()
{

    int n;
    cin >> n;
    string str;
    cin >> str;

    //cout << str << endl;

    int w_count = 0, r_count = 0, b_count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'W')
            w_count++;
        else if (str[i] == 'R')
            r_count++;
        else
            b_count++;
    }
    if (w_count == n)
    {
        cout << "YES" << endl;
        return;
    }


    if (str.size() == 1 && str[0] != 'W')
    {
        cout << "NO" << endl;
        return;
    }
    else if (str.size() == 2)
    {
        if (str[0] == 'W' || str[1] == 'W')
        {
            cout << "NO" << endl;
            return;
        }
    }

    

    for (int i = 0; i < str.size(); i++)
    {

        char ch = str[i];

        if (isValid(i - 1, n) && isValid(i + 1, n))
        {
            if ((str[i - 1] == ch && str[i + 1] == ch) || (str[i - 1] == 'W' && str[i + 1] == 'W'))
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
            continue;
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