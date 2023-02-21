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

bool isValid(int x, int y, int m, int n)
{
    return x >= 0 && y >= 0 && x < m && y < n;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    vector<string> v;
    int first = 0;
    int second = 1;
    int third = 0;

    for (int i = 0; i < a; i++)
    {
        string temp;
        cin >> temp;
        v.push_back(temp);
    }
    int occur = 0;


    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            string final_str = "";

            if (isValid(i, j + 1, a, b) and isValid(i + 1, j + 1, a, b) and isValid(i + 1, j, a, b))
            {
                final_str.push_back(v[i][j]);
                final_str.push_back(v[i][j+1]);
                final_str.push_back(v[i+1][j]);
                final_str.push_back(v[i+1][j+1]);
                
            }
            Sort(final_str);

            if (final_str == "acef")
                occur++;
        }
    }

    cout << occur << endl;
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