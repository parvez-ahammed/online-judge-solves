#include <bits/stdc++.h>
using namespace std;

#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define ToggleBit(x, k) (x ^= (1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)

int main()
{

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {

        int n;
        cin >> n;
        int ones = __builtin_popcount(n);

        int ans = 0;

        for (int i = 0; i < 1000000; i++)
        {
            if (__builtin_popcount(i) == ones && i != n)
            {
                ans = i;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}