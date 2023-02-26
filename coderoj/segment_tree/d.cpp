#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define endl "\n"
#define ll long long int

const ll N = 1e5 + 5;
ll tree[4 * N];
ll freq[4 * N];

// Build the segment tree
// Here we are using 1 based indexing

void build(ll arr[], ll current_node, ll left_end, ll right_end)
{
    if (left_end == right_end)
    {
        tree[current_node] = arr[left_end];
        freq[current_node] = 1;
    }
    else
    {
        ll mid = (left_end + right_end) >> 1;
        ll left_node = current_node * 2;
        ll right_node = current_node * 2 + 1;

        build(arr, left_node, left_end, mid);
        build(arr, right_node, mid + 1, right_end);

        tree[current_node] = min(tree[left_node], tree[right_node]);
        freq[current_node] = 0;

        if (tree[current_node] == tree[left_node])
        {
            freq[current_node] += freq[left_node];
        }
        if (tree[current_node] == tree[right_node])
        {
            freq[current_node] += freq[right_node];
        }
    }
}

pair<ll, ll> query(ll current_node, ll left_end, ll right_end, ll left_query, ll right_query)
{
    // invalid query
    if (left_query > right_query)
    {
        return {LLONG_MAX, 0};
    }
    // complete overlap
    if (left_query == left_end && right_query == right_end)
    {
        return {tree[current_node], freq[current_node]};
    }
    // finding mid search in left and right subtree
    ll mid = (left_end + right_end) >> 1;
    ll left_node = current_node * 2;
    ll right_node = current_node * 2 + 1;

    auto left_ans = query(left_node, left_end, mid, left_query, min(right_query, mid));
    auto right_ans = query(right_node, mid + 1, right_end, max(left_query, mid + 1), right_query);

    if (left_ans.first == right_ans.first)
    {
        return {left_ans.first, left_ans.second + right_ans.second};
    }
    else if (left_ans.first < right_ans.first)
    {
        return left_ans;
    }
    else
    {
        return right_ans;
    }
}

void update(ll current_node, ll left_end, ll right_end, ll position, ll value)
{
    // base case: reached the leaf node to update
    if (left_end == right_end)
    {
        tree[current_node] = value;
        freq[current_node] = 1;
    }
    else
    {
        ll mid = (left_end + right_end) >> 1;
        ll left_node = current_node * 2;
        ll right_node = current_node * 2 + 1;

        // update the left or right subtree recursively
        if (position <= mid)
        {
            update(left_node, left_end, mid, position, value);
        }
        else
        {
            update(right_node, mid + 1, right_end, position, value);
        }

        // update the current node with the minimum value of left and right subtree
        tree[current_node] = min(tree[left_node], tree[right_node]);
        freq[current_node] = 0;

        // update the frequency of current node based on its minimum value
        if (tree[current_node] == tree[left_node])
        {
            freq[current_node] += freq[left_node];
        }
        if (tree[current_node] == tree[right_node])
        {
            freq[current_node] += freq[right_node];
        }
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
            auto ans = query(root, 0, n - 1, l, r);
            cout << ans.first << " " << ans.second << endl;
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
