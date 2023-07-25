#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int n = 1e5;
int arr[1000000], mex[1000000];
int maxV = INT_MIN;

void pre(int i)
{
    maxV = max(maxV, arr[i]);
    mex[i] = maxV;

    if (i == n)
        return;
    pre(i + 1);
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    rep(1, n + 1) cin >> arr[i];

    pre(1);

    rep(1, n + 1) cout << mex[i] << " ";
    cout << endl;

    return 0;
}