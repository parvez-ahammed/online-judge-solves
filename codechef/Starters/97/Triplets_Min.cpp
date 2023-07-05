#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};
#define BIG_MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
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
        tree[current_node] = min(tree[left_node], tree[right_node]); // Update the current node
    }
}


// Query the segment tree for the max elements in range [l, r]
int query(int v, int tl, int tr, int l, int r)
{
    if (l > r)
        return INT_MAX;
    if (l == tl && r == tr)
        return tree[v];

    int tm = (tl + tr) / 2;
    return min(query(v * 2, tl, tm, l, min(r, tm)), query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
}

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    rep(0, n) cin >> v[i];

     int root = 1;
    build(v, root, 0, n - 1);

    Sort(v);

    vector<int> trip;

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            for (int k = j + 1; k < n; k++)
            {
                trip.push_back(min(v[i], min(v[j], v[k])));
                //   int val = query(root, 0, n - 1, l, r);
            }
        }
    }
    Sort(trip);

    while (q--)
    {

        int k;
        cin >> k;

        cout << trip[k - 1] << endl;
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}








