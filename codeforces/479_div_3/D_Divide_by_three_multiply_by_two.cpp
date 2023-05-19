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

void print2DVector(vector<vector<ll>> &vv)
{
    for (int i = 0; i < vv.size(); i++)
    {
        for (int j = 0; j < vv[i].size(); j++)
        {
            cout << vv[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int getIndex(vector<ll> v, ll K)
{
    auto it = find(v.begin(), v.end(), K);

    // If element was found
    if (it != v.end())
    {

        // calculating the index
        // of K
        int index = it - v.begin();
        return index;
    }
    else
    {
        // If the element is not
        // present in the vector
        return -1;
    }
}

ll getLastLeaf(vector<vector<ll>> vv)
{

    ll lastLeaf = 0;

    for (int i = 1; i < vv.size(); i++)
    {
        ll sum = 0;
        for (int j = 1; j < vv[i].size(); j++)
        {
            sum += vv[i][j];
        }

        if (sum == 0)
            return vv[i][0];
    }
}

ll canGoToLastLeaf(vector<vector<ll>> vv, ll lastLeafIndex)
{
    for (int i = 1; i < vv.size(); i++)
    {
        if (vv[i][lastLeafIndex] == 1)
            return vv[i][0];
    }

    return 0;
}

void solve()
{
    int n;
    cin >> n;

    vll v(n + 1);

    vector<vector<ll>> vv(n + 1, vector<ll>(n + 1, 0));

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    Sort(v);

    for (int i = 1; i <= n; i++)
    {
        vv[i][0] = v[i];
        vv[0][i] = v[i];
    }

    for (int i = 1; i <= n; i++)
    {

        if (v[i] % 3 == 0)
        {
            int des = getIndex(v, v[i] / 3);
            int src = getIndex(v, v[i]);

            if (des != -1)
                vv[src][des] = 1;
        }

        ll yDes = getIndex(v, v[i] * 2);
        ll ySrc = getIndex(v, v[i]);

        if (yDes != -1)
            vv[ySrc][yDes] = 1;
    }

    ll lastLeaf = getLastLeaf(vv);

    stack<ll> st;

    st.push(lastLeaf);

    for (int i = 0; i < n - 1; i++)
    {
        ll canGotToLstIndex = canGoToLastLeaf(vv, getIndex(v, lastLeaf));
        st.push(canGotToLstIndex);
        lastLeaf = canGotToLstIndex;
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}