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
    string str;
    cin >> str;

    bool possible = true;

    if (str == "YES")
        possible = false;
    else if (str.size() == 1 && str[0] != 'Y' && str[0] != 'e' && str[0] != 's')
    {
         possible = false;
    }
    else
        {
            for (int i = 0; i < str.size() - 1; i++)
            {
                if (str[i] == 'Y' && str[i + 1] != 'e')
                {
                    possible = false;
                    break;
                }
                else if (str[i] == 'e' && str[i + 1] != 's')
                {
                    possible = false;
                    break;
                }
                else if (str[i] == 's' && str[i + 1] != 'Y')
                {
                    possible = false;
                    break;
                }
                else if (str[i] != 'Y' && str[i] != 'e' && str[i] != 's')
                {
                    possible = false;
                    break;
                }
            }
        }

    possible ? cout << "YES" << endl : cout << "NO" << endl;
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