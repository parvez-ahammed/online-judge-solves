#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, k;
    string s;
    cin >> n >> k >> s;

    map<char, int> mp;

    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    int len = s.size();
    int desired = k;

  

    for (auto x : mp)
    {
        if (desired == 0)
        {
            break;
        }
        else
        {
            if (x.second % 2 != 0)
            {
                mp[x.first]--;
                desired--;
            }
        }
    }


    for (auto x : mp)
    {
        if (desired == 1 or desired == 0)
        {
            break;
        }
        else
        {
            if (x.second >= desired)
            {
                mp[x.first] -= desired;
                desired = 0;
            }
            else
            {
                desired -= x.second;
                mp[x.first] = 0;
            }
        }
    }

    if (desired == 1)
    {
        for (auto x : mp)
        {
            if (x.second > 0)
            {
                mp[x.first] -= desired;
                desired--;

                break;
            }
        }
    }

        int oddCount = 0, evenCount = 0;

    for (auto x : mp)
    {

        if (x.second != 0)
        {
            if (x.second % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }
    }

   

    

    if (oddCount <= 1)
    {
        cout << "YES" << endl;
    }
    else
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