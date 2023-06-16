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

int KMPSearch(string txt, string pat)
{
    int PAT_SIZE = pat.size();
    int TXT_SIZE = txt.size();

    VI lps(PAT_SIZE, 0);

    lps = computeLPSArray(pat, lps);

    int count = 0;

    int i = 0;
    int j = 0;
    while ((TXT_SIZE - i) >= (PAT_SIZE - j))
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }

        if (j == PAT_SIZE)
        {
            count++;
            j = lps[j - 1];
        }

        else if (i < TXT_SIZE && pat[j] != txt[i])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }

    return count;
}

ll hashValue(char c)
{
    return ((c - 'a' + 1) * 7);
}

int RABIN_KARP(string text, string pat)
{

    ll desiredHash = 0, currentHash = 0;

    int M = pat.size();
    int N = text.size();

    for (int i = 0; i < M; i++)
        desiredHash += hashValue(pat[i]);

    for (int i = 0; i < M; i++)
        currentHash += hashValue(text[i]);

    int i = 1;

    int count = 0;
    string ans = text.substr(i - 1, M);
    while (i <= (N - M + 1))
    {

        if (currentHash == desiredHash && ans == pat)
            count++;

        currentHash -= hashValue(text[i - 1]);
        currentHash += hashValue(text[i + M - 1]);
        ans.erase(ans.begin());
        ans += text[i + M - 1];

        i++;
    }

    return count;
}
ll NORMAL_FINDING(string text, string pat)
{
    int M = pat.size();
    int N = text.size();
    int i = 1;
    int count = 0;
    string ans = text.substr(i - 1, M);

    while (i <= (N - M + 1))
    {

        if (ans == pat)
            count++;
        ans.erase(ans.begin());
        ans += text[i + M - 1];

        i++;
    }

    return count;
}
void solve()
{

    string a, b;

    cin >> a >> b;

    // cout << KMPSearch(a, b) << endl;
    //cout << RABIN_KARP(a, b) << endl;
    cout << NORMAL_FINDING(a, b) << endl;
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