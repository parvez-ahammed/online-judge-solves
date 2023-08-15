#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int32_t main()
{

    FAST;
    int n;
    cin >> n;

    int x, minV = INT_MAX, maxV = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        minV = min(x, minV);
        maxV = max(x, maxV);
    }

    cout << (maxV + 1 - minV) - n << endl;

    return 0;
}