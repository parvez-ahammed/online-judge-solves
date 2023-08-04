#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

bool checkNeutral(vector<int> &s)
{

    int n = s.size();

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            return false;
    }

    return true;
}

bool checkAllGood(vector<int> &s)
{

    int n = s.size();

    for (int i = 1; i < n; i++)
    {
       if (s[i] < s[i - 1])
            return false;
    }

    return true;
}

bool checkAllBad(vector<int> &s)
{

    int n = s.size();

    for (int i = 1; i < n; i++)
    {
       if (s[i] > s[i - 1])
            return false;
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> s(n), track;
    for (int i = 0; i < n; i++)
        cin >> s[i];

    if (checkNeutral(s))
    {
        cout << "neutral" << endl;
        return;
    }

    
    if (checkAllGood(s))
    {
        cout << "allGoodDays" << endl;
        return;
    }

    if (checkAllBad(s))
    {
        cout << "allBadDays" << endl;
        return;
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] < s[i] and s[i] > s[i + 1])
            track.push_back(i);
        
    }

    if (track.size() < 2)
    {
        cout << "none" << endl;
        return;
    }

    int ans = INT_MIN;
    for (int i = 1; i < track.size(); i++)
        ans = max(ans, track[i] - track[i - 1]);

    cout << --ans << endl;
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}