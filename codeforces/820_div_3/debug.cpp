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

  
    int n = str.size();
    vector<pair<int, int>> v(n), pres;

    for (int i = 0; i < n; i++)
        v[i] = {(str[i] - 'a') + 1, i + 1};

    int start = v[0].first;
    int end = v[n - 1].first;

    if (start > end)
        swap(start, end);

    for (int i = 0; i < n; i++)
    {
        if (v[i].first >= start and v[i].first <= end)
            pres.push_back(v[i]);
    }

    sort(pres.begin(), pres.end());

    start = v[0].first;
    end = v[n - 1].first;

    if (start > end)
        reverse(pres.begin(), pres.end());

    ll sum = 0;
    for (int i = 0; i < pres.size() - 1; i++)
        sum += abs(pres[i].first - pres[i + 1].first);

    cout << sum << " " << pres.size() << "\n"
         << 1 << " ";

    for (int i = 0; i < pres.size(); i++)
    {
        if (pres[i].second != 1 && pres[i].second != n)
            cout << pres[i].second << " ";
    }

    cout << n << endl;
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