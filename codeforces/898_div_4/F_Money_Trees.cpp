#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

#define vi vector<int>

vi A, H;
int N, K;

bool ok(int mid)
{

    int len = INT_MIN;

    for (int i = 0; i < N;) {

        int cnt = 0;

        int limit = min(N - 1, i + mid + 1);
        int fruit = 0;
        int j = i;

         cout << "FOR i " << i << " limit " << limit << " " << endl;

        while (j < limit)

        {
            fruit += A[j];

            if (fruit > K) {
                
                break;
            }
            if (H[j] % H[j + 1] != 0) {
                
                break;
            }
            j++;
            cnt++;
            cout << "j " << j << " fruit " << fruit << " " << endl;
        }
        if (cnt >= 0 and fruit <= K  )
            cnt += 1;

        i == j ? i++ : i = j;

         cout << cnt << " " << endl;

        len = max(len, cnt);
    }

    return len >= mid;
}
int binSearch()
{

    int l = 0, r = 1e18 + 7;

    int ans = 0;

    while (l <= r) {

        int mid = l + (r - l) / 2;

        // cout << l << " " << mid << " " << r << endl;

        if (ok(mid)) {

            ans = mid;

            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return ans;
}

void solve()
{

    cin >> N >> K;

    A = vi(N);
    H = vi(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    if (N == 1) {
        if (A[0] <= K)
            cout << 1 << endl;
        else
            cout << 0 << endl;
        return;
    }

    //cout << binSearch() << endl;

    cout << "\n"<< ok(3) << endl;
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