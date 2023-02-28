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

void solve()
{
    string test = "";
    int count = 0;
    //cout << 10 << endl;

    int j = 0;
    

    for (int i = 1; i < 100000; i++)
    {

        if (i % 3 == 0)
        {
            test += 'F';
            // cout << 'F' << " " << i << endl;
        }
        if (i % 5 == 0)
        {
            test += 'B';
            // cout << 'B'<< " " << i << endl;
        }
        // if (test.size() == 5)
        // {
        //     count++;
        //     cout << test.size() << endl;
        //     cout << test << endl;
        //     test = "";
        // }
        
    }


    //cout << test.size() << endl;
    cout << test << endl;

    // for (int i = 0; i < count; i++)
    // {
    //     cout << "YES" << endl;
    // }

    // cout << count << endl;
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
// FBFFBFFBFB
// FBFFBFFFBF
// FBFFBFFBFB
