#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int binaryexp(int a, int b)
{
    int result = 1;
    while (b > 0) {
        if (b & 1)
            result = result * a;
        a = a * a;
        b /= 2;
    }
    return result;
}
int vt(int value)
{
    int kt = 2;
    int gese = 0;
    while (kt <= value) {
        ++gese;
        kt = kt * 2;
    }
    return gese;
}
void build(int node, int l, int r, vector<int>& arr, vector<vector<bool>>& tree)
{
    if (l == r) {
        if (arr[l] != 0) {
            int val = vt(arr[l]);
            tree[node][val] = true;
        }
    } else {
        int mid = (l + r) / 2;
        int right = 2 * node, left = 2 * node + 1;
        build(right, l, mid, arr, tree);
        build(left, mid + 1, r, arr, tree);
        for (int i = 0; i < 31; i++) {
            if (tree[left][i] == true || tree[right][i] == true)
                tree[node][i] = true;
        }
    }
}
void query(int node, int l, int r, int l1, int r1, vector<int>& ans, vector<vector<bool>>& tree)
{
    if (l > r1 || l1 > r)
        return;
    if (l1 <= l && r1 >= r) {
        for (int i = 0; i < 31; i++) {
            if (tree[node][i] == true)
                ans[i] = 1;
        }
    } else {
        int mid = (l + r) / 2;
        int right = 2 * node, left = 2 * node + 1;
        query(right, l, mid, l1, r1, ans, tree);
        query(left, mid + 1, r, l1, r1, ans, tree);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    for (int p = 1; p <= t; p++) {
        cout << "Case " << p << ":" << endl;
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        vector<vector<bool>> tree(4 * n + 10, vector<bool>(31, 0));
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i <= 4 * n; i++) {
            for (int j = 0; j < 31; j++)
                tree[i][j] = false;
        }
        build(1, 0, n - 1, arr, tree);
        while (q--) {
            int l, r;
            cin >> l >> r;
            --l, --r;
            vector<int> ans(31, 0);
            query(1, 0, n - 1, l, r, ans, tree);
            int ans1 = 0;
            for (int i = 0; i < 31; i++) {
                ans1 = ans1 + binaryexp(2, i) * ans[i];
            }
            cout << ans1 << endl;
        }
    }
}