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

        string str;
        cin >> str;
        int zero_after_one = -1;
        for (int i = str.size() - 1; i > 0; i--)
        {
            if (str[i] == '0' && str[i - 1] == '1')

                zero_after_one = i;
                }

        if (zero_after_one != -1)

            str.erase(str.begin() + zero_after_one);

        else

            str.erase(str.end() - 1);

        cout << str << endl;
    }
    return 0;
}