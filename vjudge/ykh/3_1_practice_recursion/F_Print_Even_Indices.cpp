#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

void printIndices(int n, vector<ll> v)
{
    if (n == -1)
        return;

    if (n == 0 or !(n & 1))
        cout << v[n] << " ";

    printIndices(--n, v);
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> v(n, 0);
    rep(0, n) cin >> v[i];
    --n;
    printIndices(n, v);
    return 0;
}