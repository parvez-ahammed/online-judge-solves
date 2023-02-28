// Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).

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

void solve()
{

    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int odd = 0;
    char odd_char;
    for (auto i : mp)
    {
        if (i.second % 2 != 0)
        {
            odd++;
            odd_char = i.first;
        }
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }
    string ans = "";
    for (auto i : mp)
    {
        if (i.second % 2 == 0)
        {
            for (int j = 0; j < i.second / 2; j++)
            {
                ans += i.first;
            }
        }
    }
    string ans2 = ans;
    Reverse(ans2);
    if (odd == 1)
    {
        for (int i = 0; i < mp[odd_char]; i++)
        {
            ans += odd_char;
        }
    }
    ans += ans2;
    cout << ans << endl;
    
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
