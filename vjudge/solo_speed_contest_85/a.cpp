//https://vjudge.net/contest/539792?fbclid=IwAR3wkNzdTUqilNzyoc03T01UztVvZlvQiOgBcUKMjROP64KSRQdRKctFAAc#problem/C

#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = a; i >= 0; i--)
    {
        if (i * 2 <= b && i * 4 <= c)
        {
            a = i;
            break;
        }
    }

    cout << a + (a * 2) + (a * 4) << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}