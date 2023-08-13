#include <bits/stdc++.h>
using namespace std;

#define SetBit(x, k) (x |= (1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)

void solve()
{

    int x;
    cin >> x;

    //cout << CheckBit(x, 28) << endl;
    //cout << bitset<32>(x) << endl;

    int a = x;
    int b = x;
    int c = x;
    SetBit(a, 29);
    SetBit(b, 28);
    SetBit(c, 27);

    cout << a << " " << b << " " << c << endl;

    //cout << ((a | b) & (b | c) & (c | a)) << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}

