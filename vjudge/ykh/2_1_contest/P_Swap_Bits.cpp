#include <bits/stdc++.h>
using namespace std;

#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define ToggleBit(x, k) (x ^= (1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)

int main()
{

    int tc = 1;
    cin >> tc;
    while (tc--)
    {

        int n;
        cin >> n;
        //cout << bitset<32>(n) << endl;
        for (int i = 0; i < 30; i+=2)

        {
            int bit1 = CheckBit(n, i);
            int bit2 = CheckBit(n, i + 1);
            if (bit1 != CheckBit(n, i + 1))
                ToggleBit(n, i + 1);
            if (bit2 != CheckBit(n, i))
                ToggleBit(n, i);
        }

        cout << n << endl;
    }
    return 0;
}