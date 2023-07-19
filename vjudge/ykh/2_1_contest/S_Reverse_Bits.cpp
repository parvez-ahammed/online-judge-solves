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
        unsigned int n  , rev = 0;
        cin >> n;
        for (int i = 0 ; i <= 31  ; i++)
        {
            if (CheckBit(n , i))
                    SetBit(rev  , 31 -i);
        }
       
        cout << rev << endl;
    }
    return 0;
}