#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())
#define VI vector<int>

VI computeLPSArray(string pat, VI lps)
{
    int len = 0;
    lps[0] = len;
    int i = 1;

    while (i < pat.size())
    {
        if (pat[len] == pat[i])
            ++len, lps[i] = len, i++;
        else
            len != 0 ? (len = lps[len - 1]) : (lps[i] = len, i++);
    }

    return lps;
}

void solve()
{
    string text, pat;
    cin >> text;
    pat = text;

    reverse(pat.begin(), pat.end());

    pat = pat +  '_' + text;
    //cout << pat << endl;

    VI lps(pat.size(), 0);
    lps = computeLPSArray(pat, lps);

    // for (int i = 0; i < lps.size(); i++)
    // {
    //     cout << lps[i] << " ";
    // }

    //cout << endl;

    int MAX_SIZE = text.size() * 2;
    int total = MAX_SIZE - lps[lps.size() - 1];

    cout << total << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--)
    {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}