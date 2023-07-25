#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
vector<pair<double, int>> v(30, {0, 0});
int n, sackSize;

int maxvalue(int indice, int weight, int value)
{
    if (indice == n)
    {
        if (weight <= sackSize)
            return value;
        return 0;
    }

    int take = maxvalue(indice + 1, weight, value);

    int notTake = maxvalue(indice + 1, weight + v[indice].first, value + v[indice].second);

    return max(take, notTake);
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> sackSize;

    rep(0, n) cin >> v[i].first >> v[i].second;

    cout << maxvalue(0, 0, 0) << endl;

    return 0;
}