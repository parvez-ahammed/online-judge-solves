#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"

string S;

vector<vector<int>> indexMap;

bool sub(string s1)
{
    int n = s1.length();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int> indices = indexMap[s1[i] - '0'];

        auto it = lower_bound(indices.begin(), indices.end(), j);
        if (it == indices.end())
            return false;

        j = *it + 1;
    }

    return true;
}

void solve()
{
    vector<vector<int>> init(10);
    indexMap = init;

    cin >> S;

    for (int i = 0; i < S.length(); i++)
        indexMap[S[i] - '0'].push_back(i);

    ll m, l, r;
    cin >> m >> l >> r;

    vector<string> valid;

    string left = to_string(l);
    string right = to_string(r);
    

    for (int i = l; i <= r; i++)
    {

        string temp = to_string(i);

        bool isValid = true;

        for (int i = 0; i < m; i++)
        {
            if (!(temp[i] - '0' >= left[i] - '0' && temp[i] - '0' <= right[i] - '0'))
            {
                isValid = false;
                break;
            }
        }

        if (isValid)
            valid.push_back(temp);
    }

    for (string temp : valid)
    {

        // cout << temp << endl;
        if (!sub(temp))
        {
            cout << "YES" << endl;
            return;
        }
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