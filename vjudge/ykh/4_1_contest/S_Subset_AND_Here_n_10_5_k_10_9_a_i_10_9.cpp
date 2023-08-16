#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    int n , k;
    cin >> n >>k;

    vector <int > v(n +1);

    int res = INT_MAX;

    for (int i = 1; i <=  n ;i++)
        cin >> v[i] , res &= v[i];


    (res < k) ? cout << "YES" << endl : cout << "NO" << endl;

}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}



www.google.com      -> 8.8.8.8
www.facebook.com    -> 200.20.20.20


199     .         10.         10.       10

255     .         255.        255.      255

11000111 . 00001001 . 00001001  . 00001001


199  .10.10.10
Class           OCtate Range
A               1   -> 127
B               128 -> 191
C               192 -> 223
D               224 -> 239
E               240 -> 255    