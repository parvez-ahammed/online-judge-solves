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

void printOp(int n, vector<int> a)
{

    for (int i = n - 1; i >= 0;)
    {
        int f = 0;
        int p = 0;
        int j;
        for (j = i; j >= 0 && f <= a[j]; j--)
        {
            f = a[j];
            p += a[j];
        }

        for (int k = j + 1; k < i; k++)
        {
            cout << "0 ";
        }
        cout << p << " ";
        i = j;
    }
    cout << endl;
}

void solve()
{

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (a[n - 1] == 0)
    {
        cout << "YES" << endl;
        printOp(n, a);
    }
    else
    {
        cout << "NO" << endl;
    }
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