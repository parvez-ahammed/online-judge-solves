#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<int> taken, v;
int n;
ll total = 0;
ll splitSum(ll indice, ll curr)
{
    if (indice + 1 == n) {

        return abs((total - curr) - curr);
    } else {
        ++indice;
        ll try1 = splitSum(indice, curr + v[indice]);
        ll try2 = splitSum(indice, curr);

        return min(try1, try2);
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    v.resize(n);

    taken.resize(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        total += v[i];
    }

    sort(v.begin(), v.end());

    cout << splitSum(0, 0) << endl;
    return 0;
}