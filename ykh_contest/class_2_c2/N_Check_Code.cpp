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
    int a, b;
    string s;
    cin >> a >> b >> s;
    bool possible = true;

    for (int i = 0; i < s.size(); i++)
    {
        if (i == a || isdigit(s[i]))
            continue;
        else
        {
            possible = false;
            break;
        }
    }

  

    if (s[a] == '-' and possible)
        cout << "Yes"
             << "\n";
    else
        cout << "No"
             << "\n";
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