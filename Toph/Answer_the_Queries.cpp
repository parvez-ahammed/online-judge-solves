//https://pastebin.ubuntu.com/p/47JBsHmZJK/

#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define endl "\n"
#define ll long long int
#define rep(start, x) for (int i = start; i < x; i++)
const ll N = 1e5 + 5;
int tree[4 * N];

// Here we are using 1 based indexing

void build(vector<int> arr, int current_node, int left_end, int right_end)
{
    // If the current node is a leaf node then store the value of the array at that index
    if (left_end == right_end)
        tree[current_node] = arr[left_end];

    else
    {
        int mid = (left_end + right_end) / 2;

        // THESE FORMULAS ARE FOR 1 BASED INDEXING
        int left_node = current_node * 2;
        int right_node = current_node * 2 + 1;

        build(arr, left_node, left_end, mid);                        // Build the left subtree
        build(arr, right_node, mid + 1, right_end);                  // Build the right subtree
        tree[current_node] = max(tree[left_node], tree[right_node]); // Update the current node
    }
}

// Query the segment tree for the max elements in range [l, r]
int query(int v, int tl, int tr, int l, int r)
{
    if (l > r)
        return -1e9;
    if (l == tl && r == tr)
        return tree[v];

    int tm = (tl + tr) / 2;
    return max(query(v * 2, tl, tm, l, min(r, tm)), query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
}

void solve()
{

    int n, q, l, r;
    cin >> n >> q;

    vector<int> v(n);
    map<int, vector<int>> mp;
    rep(0, n)
    {
        cin >> v[i];
        mp[v[i]].push_back(i);
    }

    int root = 1;
    build(v, root, 0, n - 1);

    rep(0, q)
    {
        cin >> l >> r;

        int val = query(root, 0, n - 1, l, r);
        vector<int> ind = mp[val];

        int up = upper_bound(ind.begin(), ind.end(), r) - ind.begin();
        int low = lower_bound(ind.begin(), ind.end(), l) - ind.begin();

        cout << up - low << endl;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc = 1;
    cin >> tc;
    ll i = 0;
    while (tc--)
    {
        cout << "Case " << ++i << ":" << endl;
        solve();
    }
    return 0;
}
