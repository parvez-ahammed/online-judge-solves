
#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

#define SetBit(x, k) (x |= (1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)

#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{
    int n, k;
    cin >> n >> k;

    vi v(n, 0);
    vector<int> mask(33, 0);
    rep(0, n)
    {
        cin >> v[i];

        // checking which bits are turned on and making a mask for that
        for (int j = 0; j < 32; j++)
            if (CheckBit(v[i], j))
                mask[j]++;
    }
    // complexity O (30.n)  or O (n)


    // starting form the last as they have more priority as they can add more value to the number
    for (int i = 30; i >= 0; i--)
    {
        // mask[i] number of bits are currently turned on so I wil have to turn on the rest 
        int have_to_set = (n - mask[i]);

        // cout << i << " have to set" << have_to_set << endl;
        if (k >= have_to_set)
        {

            for (int j = 0; j < n; j++)
                SetBit(v[j], i);
        /*
       well although it seems I am setting up all the bits but in reality sum bits are already set so I am count the bits that I am setting only
       */

            k -= have_to_set;
        }
    }

    int ans = v[0];
    rep(1, n) ans &= v[i];

    cout << ans << endl;
}

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}