#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MOD = 998244353;
void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    // A string T consisting of A and B is considered a good string if it satisfies the following condition
    // No contiguous substring of length K in T is a palindrome.

    // Let q be the number of ? characters in S. There are 2^q strings that can be obtained by replacing each ? in
    // S with either A or B. Find how many of these strings are good strings.

    // Let dp[i][j] be the number of good strings of length i that end with j characters A.


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