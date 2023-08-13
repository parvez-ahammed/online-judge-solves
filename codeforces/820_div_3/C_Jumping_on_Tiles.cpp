#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    string str;
    cin >> str;
    map<char, vector<int>> mp;

    for (int i = 1; i < str.size(); i++)
        mp[str[i]].push_back(i + 1);

    char start = str[0];
    char end = str.back();

    int sum = 0;
    int direction = (start > end ? -1 : 1);
    vector<int> ans;
    ans.push_back(1);

    for (char c = start; c != end; c += direction)
    {
        for (auto indice : mp[c])

        {
            ans.push_back(indice);
            sum += (abs(start - c));
            start = c;
        }
    }

    for (auto indice : mp[end])

    {
        ans.push_back(indice);
        sum += (abs(start - end));
        start = end;
    }
    cout << sum << " " << ans.size() << endl;
    for (auto pos : ans)
        cout << pos << " ";
    cout << endl;
}
int32_t main()
{

    FAST;

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}