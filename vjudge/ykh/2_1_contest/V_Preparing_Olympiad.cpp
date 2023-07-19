#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define ToggleBit(x, k) (x ^= (1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> v(n);
    rep(0, n) cin >> v[i];

    int state = 0;

    int limit = pow(2, n);

    int cnt = 0;

    const int sz = n;

    for (int i = 0; i < limit; i++)
    {
        state = i;
        if (__builtin_popcount(state) >= 2)
        {
            int minV = INT_MAX;
            int maxV = INT_MIN;
            ll difficulty = 0;
            for (int i = 0; i < n; i++)
            {
                if (CheckBit(state, i))
                {
                    difficulty += v[i];
                    minV = min(minV, v[i]);
                    maxV = max(maxV, v[i]);
                }
            }

            if (difficulty >= l and difficulty <= r and maxV - minV >= x)
                cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}