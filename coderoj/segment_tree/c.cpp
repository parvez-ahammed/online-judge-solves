#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define endl "\n"
#define ll long long int

const ll N = 1e5 + 5;
ll tree[4 * N];

// Build the segment tree
// Here we are using 1 based indexing

void build(ll arr[], ll current_node, ll left_end, ll right_end)
{
    // If the current node is a leaf node then store the value of the array at that index
    if (left_end == right_end)
    {
        tree[current_node] = arr[left_end];
    }
    else
    {
        ll mid = (left_end + right_end) / 2;

        // THESE FORMULAS ARE FOR 1 BASED INDEXING
        ll left_node = current_node * 2;
        ll right_node = current_node * 2 + 1;

        build(arr, left_node, left_end, mid);       // Build the left subtree
        build(arr, right_node, mid + 1, right_end); // Build the right subtree
        tree[current_node] = tree[current_node * 2] + tree[current_node * 2 + 1]; // Update the current node
    }
}

// Query the segment tree for the sum of elements in range [l, r]
ll query(ll v, ll tl, ll tr, ll l, ll r)
{
    if (l > r)
    {
        return 0;
    }
    if (l == tl && r == tr)
    {
        return tree[v];
    }
    ll tm = (tl + tr) / 2;
    return query(v * 2, tl, tm, l, min(r, tm)) + query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}

// Update the segment tree with a new value at position i
void update(ll v, ll tl, ll tr, ll i, ll val)
{
    if (tl == tr)
    {
        tree[v] = val;
    }
    else
    {
        ll tm = (tl + tr) / 2;
        if (i <= tm)
        {
            update(v * 2, tl, tm, i, val);
        }
        else
        {
            update(v * 2 + 1, tm + 1, tr, i, val);
        }
        tree[v] = tree[v * 2] + tree[v * 2 + 1];
    }
}

void solve()
{

    ll n, q;
    cin >> n >> q;

    ll v[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll root = 1;

    build(v, root, 0, n - 1);

    for (ll i = 0; i < q; i++)
    {
        ll ch = 0, l = 0, r = 0;
        cin >> ch >> l >> r;

        if (ch == 1)
        {
            l--;
            update(root, 0, n - 1, l, r);
        }
        else
        {
            l--;
            r--;
            cout << query(root, 0, n - 1, l, r) << endl;
        }
    }
}

int32_t main()
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