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

#define for0(x,n) for(int x = 0; x < n; x++)

#define show_vector(v)                 \
    for (int i = 0; i < v.size(); i++) \
    cout << v[i] << " "
#define take_vector(v, n)       \
    for (int i = 0; i < n; i++) \
    cin >> v[i]

void solve()
{

    ll n;
    cin >> n;
    ll a_sum = 0, b_sum = 0;
   
    vector<int> a(n, 0), b(n, 0);
     take_vector(a, n);
    // for (int i = 0; i < n; i++)
    //     cin >> a[i], a_sum += a[i];
    
   take_vector(b, n);

    show_vector(a);
    cout << endl;

    cout << a_sum + b_sum - *max_element(b.begin(), b.end()) << endl;
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