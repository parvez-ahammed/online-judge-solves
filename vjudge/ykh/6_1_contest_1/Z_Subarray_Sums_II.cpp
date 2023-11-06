#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MAXN = 2e5 + 9;
ll n, k;
vector<int> v(MAXN);

map<ll, int> prefixSum;

ll updateResult(ll currSum)
{
    ll res = 0;
    if (currSum == k)
        res++;


    // assuming that  currSum - k= val 
    // currSum = val + k
    // we have val so the number has to be k
    // so we are then adding the occurence of val in the map
    if (prefixSum.find(currSum - k) != prefixSum.end())
        res += (prefixSum[currSum - k]);

    return res;
}

ll countSub()
{


    ll res = 0;

    ll currSum = 0;

    for (int i = 1; i <= n; i++) {

        currSum += v[i];

        res += updateResult(currSum);

        prefixSum[currSum]++;
    }

    return res;
}
void solve()
{

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    cout << countSub() << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}