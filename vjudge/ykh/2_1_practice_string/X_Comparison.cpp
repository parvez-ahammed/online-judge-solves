#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

void solve()
{
    string str;
    cin >> str;
    if (str.size() == 1)
    {
        cout << str << '\n';
    }
    else
    {
        string result = "", x, y;
        vector<string> v;
        for (int i = 0; i < str.size() - 1; i++)
        {
            x = str.substr(0, i + 1);
            y = str.substr(i + 1, str.size() - 1 - i);
            Sort(x);
            Sort(y);
            result = x + y;
            v.push_back(result);
        }
        Sort(v);
        cout << v.front() << '\n';
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}