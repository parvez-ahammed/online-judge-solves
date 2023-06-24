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

bool canAchieveKnowledge(int n, int x, vll bookDifficulties) {
    vector<int> dp(x + 1, 0);

    // Base case: With 0 books, knowledge is 0
    dp[0] = 1;

    for (int i = 0; i < n; i++) {
        ll difficulty = bookDifficulties[i];

        for (int j = x; j >= 0; j--) {
            if (dp[j]) {
                ll newKnowledge = j | difficulty;

               
                dp[newKnowledge] = 1;
            }
        }
    }

    return dp[x];
}

void solve()
{

   int n, x;
    cin >> n >> x;

    vll bookDifficulties(3 * n);
    for (int i = 0; i < 3 * n; i++)
        cin >> bookDifficulties[i];

    if (canAchieveKnowledge(n, x, bookDifficulties))
        cout << "Yes, it is possible to achieve knowledge " << x << endl;
    else
        cout << "No, it is not possible to achieve knowledge " << x << endl;
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