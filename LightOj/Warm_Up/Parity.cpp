

#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
void solve()
{

    ll n;
    cin >> n;

    string str = bitset<32>(n).to_string();

    ll count = 0;
    rep(0, str.size()) str[i] == '1' ? count++ : count = count;

    count & 1 ? cout << "odd" : cout << "even";
    cout << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--)
    {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}