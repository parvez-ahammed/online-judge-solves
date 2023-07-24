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
#define BIG_MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
#define rep(start, x) for (int i = start; i < x; i++)

bool fibonacci(int fn1, int fn2, int number)
{
    int n3;

    while (number--)
    {
        n3 = fn1 - fn2;
        if (n3 < 0 || n3 > fn1 || n3 > fn2 || fn2 > fn1)
            break;
            
        fn1 = fn2;
        fn2 = n3;
    }

    return number == -1;
}

void solve()
{
    int n, k;

    cin >> n >> k;

    k -= 3;
    int cnt = 0;

    if (k > 35)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 1; i < n + 1; i++)
    {

        int fn1 = i;
        int fn2 = n - i;

        if (fn1 < fn2)
            continue;

        bool possible = fibonacci(fn1, fn2, k);

        if (possible)
            cnt++;
    }

    cout << cnt << endl;
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