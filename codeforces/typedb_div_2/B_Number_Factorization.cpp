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

void DivisorOfN(vector<int> &v,
                map<int, bool> &marked,
                int n)
{
    // sqrt(N) approach
    // to find divisors of N
    for (int i = 1; i <= sqrt(n); i++)
    {

        if (n % i == 0)
        {
            if (n / i == i)
            {
                v.push_back(i);
                marked[i] = true;
            }
            else
            {
                v.push_back(i);
                v.push_back(n / i);
                marked[i] = true;
                marked[n / i] = true;
            }
        }
    }
}

void SieveOfEratosthenes(vector<bool> &prime)
{

    for (int p = 2; p * p <= prime.size(); p++)
    {

        if (prime[p] == true)
        {
            for (int i = p * p; i <= prime.size(); i += p)
                prime[i] = false;
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    vector<int> vd;
    map<int, bool> marked;
    vector<bool> prime(100000, true);

    SieveOfEratosthenes(prime);

    DivisorOfN(vd, marked, n);

    Sort(vd);

    for (int i = 0; i < vd.size(); i++)
    {
        // if (prime[vd[i]] == true)
        // cout << vd[i] << " ";
        // cout << prime[vd[i]] << " ";
        cout << "HELLO" << endl;
    }

    cout << endl;
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