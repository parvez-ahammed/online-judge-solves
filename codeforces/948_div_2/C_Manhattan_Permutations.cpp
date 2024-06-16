#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

ll getManhattanDistance(vector<int>& a)
{
    int n = a.size();
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += abs(a[i] - (i + 1));
    }
    return ans;
}

int swapValue(int a, int i, int b, int j)
{
    // cout << "swap "<< abs(a - j) + abs(b - i) << endl;
    return abs(a - j) + abs(b - i);
}
void solve()
{

    ll n, k;
    cin >> n >> k;

    if (k % 2 != 0) {
        cout << "NO" << endl;
        return;
    }


    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    sort(a.rbegin(), a.rend());
    if (k > getManhattanDistance(a)) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    sort(a.begin(), a.end());

    int j = n - 1;
    for (int i = 0; i < n; i++) {
        while (swapValue(a[i], i, a[j], j) > k and j > i) {
            j--;
        }
        if (k == 0) {
            break;
        }

        int increse = swapValue(a[i], i, a[j], j);
        k -= increse;
        swap(a[i], a[j]);
        j--;
    }

    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}