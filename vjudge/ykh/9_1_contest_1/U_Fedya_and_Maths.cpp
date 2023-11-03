#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
// len can be 10 ^ (100000)
const int N = 1e6 + 2, mod = 1e9 + 7;

int power(int x, ll n, int mod)
{ // O(log n)
    int ans = 1 % mod;
    while (n > 0) {
        if (n & 1) {
            ans = 1LL * ans * x % mod;
        }
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}

void solve()
{

    string s;
    cin >> s;
    int lastChar = s[s.size() - 1] - '0';
    int secondLastChar = s[s.size() - 2] - '0';

    int twoDigit = secondLastChar * 10 + lastChar;

    

    
    // n + 2^n + 3^n + 4^n
    // n + 2^n(1+ 2^n) + 3^n
    // divisible only if last digit is 0 or 5
    // which powers of 3 are divisible by 5?

    // the following pattern can be observed in circular

    // for (int i = 0; i <= 203; i++) {
    //     ll sum = power(1, i, 1000) + power(2, i, 1000) + power(3, i, 1000) + power(4, i, 1000);
    //     if (sum % 5 == 4)
    //         cout << endl;
    //     cout << "lastDigit = " << i % 10 << " sum % 5 = " << sum % 5 << endl;
    // }

    // pattern only the number divisible by 4 have mod value 4
    // if the number created by taking only the last two digits is divisible by 4 then the whole number is divisible by 4


    if (twoDigit % 4 == 0)
        cout << 4 << endl;
    else
        cout << 0 << endl;

   
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}