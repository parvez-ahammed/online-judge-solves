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
    char c;
    cin >> n >> c;
    string str;
    cin >> str;

    vector<int> g_position;
    vector<int> c_position;

    if (c == 'g')
        cout << 0 << endl;
    else
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'g')
                g_position.push_back(i + 1);
            if (str[i] == c)
                c_position.push_back(i + 1);
        }

        int min_val = 10e7;
        int max_val = -1;

        for (int i = 0; i < c_position.size(); i++)
        {
            min_val = 10e7;
            for (int j = 0; j < g_position.size(); j++)
            {
                if (c_position[i] < g_position[j])
                    min_val = min(min_val, g_position[j] - c_position[i]);
                else
                    min_val = min(min_val, ((n - c_position[i]) + g_position[j]));
            }
            max_val = max(max_val, min_val);
        }
        cout << max_val << endl;
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