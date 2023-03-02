#include <bits/stdc++.h>
#include <iostream>
#include <string>
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

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    // convert the string to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    if (str[0] != 'm')
    {
        cout << "NO" << endl;
        return;
    }

    string ans = "";

    int m_count = 0;
    int e_count = 0;
    int o_count = 0;
    int w_count = 0;

    for (int i = 0; i < n; i++)
    {

        if (str[i] == 'm')
        {
            m_count++;
        }
        else if (str[i] == 'e')
        {
            e_count++;
        }
        else if (str[i] == 'o')
        {
            o_count++;
        }
        else if (str[i] == 'w')
        {
            w_count++;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    if (m_count == 0 || e_count == 0 || o_count == 0 || w_count == 0)
    {
        cout << "NO" << endl;
        return;
    }

    ans += str[0];

    int last_w = ans.find_last_of('w');
    for (int i = 1; i < n; i++)
    {

        if (str[i] == 'm' && 'm' != ans[ans.size() - 1])
        {
            ans += str[i];
        }
        else if (str[i] == 'e' && 'e' != ans[ans.size() - 1])
        {
            ans += str[i];
        }
        else if (str[i] == 'o' && 'o' != ans[ans.size() - 1])
        {
            ans += str[i];
        }
        else if (str[i] == 'w' && 'w' != ans[ans.size() - 1])
        {
            ans += str[i];
        }
    }

   // cout << ans << endl;

    if (ans == "meow")
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
