#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, k;
    cin >> n >> k;

    vector<int> a(400005);

    map<int, queue<int>> mp; // 2 * n
    map<int, int> nextOccur; // n

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]].push(i);
    }

    int ans = 0;

    vector<int> library(400005, 0);

    int totalBooks = 0;

    for (int i = 0; i < n; i++) {

        if (library[a[i]] == 1) {
            mp[a[i]].pop();

            if (mp[a[i]].empty()) {
                library[a[i]] = 0;
                totalBooks--;
            } else {
                int ind = mp[a[i]].front();
                nextOccur[ind] = a[i];
            }
            continue;
        }

        if (totalBooks == k) {

            int ind = nextOccur.rbegin()->first;
            int minBook = nextOccur[ind];

            nextOccur.erase(ind);
            library[minBook] = 0;
            totalBooks--;
        }

        if (!mp[a[i]].empty()) {
            mp[a[i]].pop();
        }

        if (!mp[a[i]].empty()) {
            int ind = mp[a[i]].front();
            nextOccur[ind] = a[i];
            library[a[i]] = 1;
            totalBooks++;
        }

        ans++;
    }
    cout << ans << endl;
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