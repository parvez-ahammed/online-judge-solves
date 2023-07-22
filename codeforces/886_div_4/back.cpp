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

void solve()
{

    ll n, C;
    cin >> n >> C;
    vi v(n);
    ll B = 0, A = 0;
    rep(0, n)
    {
        cin >> v[i];

        C -= sq(v[i]);

        B += (2 * v[i]);
    }
    A = n;

    ll gcd = __gcd(A, B);
    gcd = __gcd(gcd, C);

    A /= gcd;
    B /= gcd;
    C /= gcd;

    ll twoA = 2 * A;
    ll minusB = B * -1;
    ll bSquare = (B * B);
    unsigned long long fourAC = (4 * A * C);

    unsigned long long xMinus = ((minusB) - (sqrt(bSquare + fourAC))) / (twoA * 1.0);
    unsigned long long xPlus = ((minusB) + (sqrt(bSquare + fourAC))) / (twoA * 1.0);

    //cout << A << " " << B << " " << C << endl;

    //cout << twoA << " " << minusB << " " << bSquare << " " << fourAC << endl;

    cout << fixed << setprecision(10) << max(xMinus, xPlus) / (2.0) << endl;
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