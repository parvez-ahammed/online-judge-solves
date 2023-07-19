#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
vector<pair<double, int>> v;
int N;

int maxAmount(int curr, int sackSize)
{
    if (curr == N || sackSize == 0)
        return 0;

    cout << curr << " " << v[curr].first * v[curr].second << " " << sackSize << endl;

    if (v[curr].second <= sackSize)
        return v[curr].first * v[curr].second + maxAmount(curr + 1, sackSize - v[curr].second);
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sack;
    cin >> n >> sack;

    v = vector<pair<double, int>>(n);
    N = n;

    int amount, value;
    rep(0, n) cin >> amount >> value, v[i] = {value / (amount * 1.0), amount};
    sort(v.begin(), v.end(), greater<pair<double, int>>());

    cout << maxAmount(0, sack) << endl;

    return 0;
}