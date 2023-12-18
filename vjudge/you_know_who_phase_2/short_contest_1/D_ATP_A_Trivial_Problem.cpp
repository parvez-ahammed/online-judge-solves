#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

map<int, vector<int>> mp;

void findTrailingZeros(int n)
{
    int val = n;

    int count = 0;

    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;

    mp[count].push_back(val);
}
void init()
{
    for (int i = 1; i <= 1000000; i++) {
        findTrailingZeros(i);
    }

    for (auto x : mp) {
        sort(x.second.begin(), x.second.end());
    }
}
void solve()
{

    int n;
    cin >> n;

    cout << mp[n].size() << endl;
    for (auto x : mp[n])
        cout << x << " ";
    cout << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    init();
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}