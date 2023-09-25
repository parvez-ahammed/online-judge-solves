#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n;
    cin >> n;

    vector<ll> S(n + 1);

    set<int> st;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        ll status = 0;

        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            st.insert(x);
            status = (status | (1LL << x));
        }

        S[i] = status;
    }

    int ans = 0;

    for (auto i : st) {
        
        ll state = 0;
        for (int j = 0; j < n; j++) {

            if (!(S[j] & (1LL << i))) {
                state |= S[j];
            }
        }

        int cnt = __builtin_popcountll(state);

        ans = max(ans, cnt);
    }

    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}