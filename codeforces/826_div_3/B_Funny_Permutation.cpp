#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
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

    ll n;
    cin >> n;

    ll final_n = n;

    if (n == 1 || n == 3)
    {
        cout << -1 << endl;
        return;
    }

    if (n % 3 == 1)
    {
        ll first = n - 1;
        ll second = n;
        
        cout << first << " " << second << " ";
        ll dec = n - n / 2;

        for (int i = dec; i < first; i++)
        {
            dec = i;
            cout << dec << " ";
        }
        dec = dec - n / 2 + 1;

        for (int i = dec; i >= 1; i--)
        {
            dec = i;
            cout << dec << " ";
        }
    }
    else 
    {
        int i = 0;
        ll dec = n / 2;
        while (i < dec)
        {
            cout << n << " ";
            n--;
            i++;
        }
        for (int i = 1; i <= n; i++)
            cout << i << " ";   
    }
    

    cout << endl;
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