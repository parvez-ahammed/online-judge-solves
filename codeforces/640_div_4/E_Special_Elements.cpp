#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"

#define vi vector<int>
#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{
    int n;
    cin >> n;
    map<int, int> sums;
    int x;

    vi prefix(n + 3, 0);
    rep(1, n + 1) cin >> x, prefix[i] = prefix[i - 1] + x, sums[x]++;

    int count_l = 1, count_r = 2, l = 1, r = n;
    int cnt = 0;
    while (count_r <= n)
    {
        l = count_l;
        r = count_r;

        while (l < r)
        {

            int rangeSum = prefix[r] - prefix[l - 1];

            if (sums.count(rangeSum) > 0)
            {
                cnt += sums[rangeSum];
                auto it = sums.find(rangeSum);
                sums.erase(it);
                
            }
            ++l;
        }
        ++count_r;
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