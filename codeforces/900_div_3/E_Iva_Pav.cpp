#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

const int N = 1e6 + 9;
int tree[N * 4];
int arr[N];

void init(int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) >> 1;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] & tree[Right];
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return INT_MAX;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) >> 1;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1 & p2;
}

bool ok(int n, int l, int mid, int k)
{
    int cnt = query(1, 1, n, l, mid);
    return cnt >= k;
}

int binarySearch(int left, int k, int n)
{
    int l = left, r = n, ans = -1;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (ok(n, left, mid, k)) {

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
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    init(1, 1, n);
    int q;
    cin >> q;
    while (q--) {
        int l, k;
        cin >> l >> k;

        cout << binarySearch(l, k, n) << " ";
    }
    cout << endl;
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


