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

void solve()
{

    int n;
    cin >> n;
    int backup = n;
    int result1 = 0;

    while (n > 0)
    {
        if (n % 6 == 0)
        {
            result1 = n;
            break;
        }

        n /= 10;
    }

    string f_str = to_string(n);
    string main_str = to_string(backup);
    string s_str = "";

    while (!main_str.empty())
    {
        if (stoi(main_str) % 6 == 0)
        {
            s_str = main_str;
            break;
        }

        main_str.erase(0, 1);

        // cout << main_str << endl;
        // main_str.erase(0, 1);
    }

    if (s_str == "" && f_str == "0")
        cout << -1 << endl;

    else if (f_str.size() > s_str.size())
        cout << f_str << endl;
    else
        cout << s_str << endl;
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