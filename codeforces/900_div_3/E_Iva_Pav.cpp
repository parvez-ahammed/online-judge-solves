#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

vector<vector<int>> prefix;
vector<int> v;

void preparePrefix(int n)
{

    for (int i = 1; i <= n; i++) {
        int val = v[i];

        for (int j = 0; j < 32; j++) {

            prefix[i][j] = prefix[i - 1][j];

            if (val & (1 << j))
                prefix[i][j]++;
        }
    }
}

bool ok(int n, int l, int r, int k)
{
    int mask = 0;

    int need = (r - l) + 1;

    for (int i = 0; i < 32; i++) {
        int cnt = prefix[r][i] - prefix[l - 1][i];

        if (need == cnt) {
            mask |= (1 << i);
        }
    }
    return mask >= k;
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
    v.resize(n + 1);
    prefix.resize(n + 1, vector<int>(32, 0));

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    preparePrefix(n);

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 10; j >= 0; j--) {
    //         cout << prefix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

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

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define endl '\n'

// const int N = 1e6 + 9;
// int tree[N * 4];
// int arr[N];

// vector<vector<int>> prefix;
// vector<int> v;

// void init(int node, int b, int e)
// {
//     if (b == e) {
//         tree[node] = arr[b];
//         return;
//     }
//     int Left = node * 2;
//     int Right = node * 2 + 1;
//     int mid = (b + e) >> 1;
//     init(Left, b, mid);
//     init(Right, mid + 1, e);
//     tree[node] = tree[Left] & tree[Right];
// }
// int query(int node, int b, int e, int i, int j)
// {
//     if (i > e || j < b)
//         return INT_MAX;
//     if (b >= i && e <= j)
//         return tree[node];
//     int Left = node * 2;
//     int Right = node * 2 + 1;
//     int mid = (b + e) >> 1;
//     int p1 = query(Left, b, mid, i, j);
//     int p2 = query(Right, mid + 1, e, i, j);
//     return p1 & p2;
// }

// bool ok(int n, int l, int mid, int k)
// {
//     int cnt = query(1, 1, n, l, mid);
//     return cnt >= k;
// }

// int binarySearch(int left, int k, int n)
// {
//     int l = left, r = n, ans = -1;

//     while (l <= r) {
//         int mid = (l + r) / 2;

//         if (ok(n, left, mid, k)) {

//             ans = mid;
//             l = mid + 1;
//         } else {
//             r = mid - 1;
//         }
//     }
//     return ans;
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//         cin >> arr[i];
//     init(1, 1, n);
//     int q;
//     cin >> q;
//     while (q--) {
//         int l, k;
//         cin >> l >> k;

//         cout << binarySearch(l, k, n) << " ";
//     }
//     cout << endl;
// }

// int32_t main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while (tc--) {
//         solve();
//     }
//     return 0;
// }
