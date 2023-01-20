#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<long long>;
#define all(x) x.begin(), x.end();

void solve()
{
    string s, t;
    cin >> s >> t;
    unordered_map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }

    for (int x = 0; x < t.size(); x++)
    {
        m[t[x]]--;
    }

    char first;
    bool f = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (t.find(s[i]) == string::npos)
        {
            // cout << s[i];
            f = false;
            first = s[i];
            m[s[i]]--;
            break;
        }
    }
    if (f)
    {
        for (int i = 0; i < t.size(); i++)
        {
            for (int j = 0; j < s.size(); j++)
            {
                if (s[i] != t[i])
                {
                    first = s[i];
                    m[s[i]]--;
                    break;
                }
            }
        }
    }
    cout << first;
    // int cnt = m[first];
    // cnt--;
    for (auto x : m)
    {
        int cnt = x.second;
        for (int i = 0; i < cnt; i++)
        {
            cout << x.first;
            m[x.first]--;
        }
    }
    cout << t;
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}