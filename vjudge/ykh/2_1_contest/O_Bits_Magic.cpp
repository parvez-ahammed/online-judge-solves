#include <bits/stdc++.h>
using namespace std;

#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define ToggleBit(x, k) (x ^= (1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)



int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        unsigned int n, k;
        cin >> n >> k;
        SetBit(n, k);
        cout << n << endl;
    }
    return 0;
}