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
        unsigned int n;
        cin >> n;
        for (int i = 0; i < 32; i++)
            ToggleBit(n, i);
        cout << n << endl;
    }
    return 0;
}