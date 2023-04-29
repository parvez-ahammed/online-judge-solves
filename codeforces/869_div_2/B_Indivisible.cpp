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

std::vector<int> constructPermutation(int n)
{
    std::vector<int> permutation;

    if (n == 1) {
        std::cout << "1" << std::endl;
        return;
    }

    if (n == 2 || n == 3) {
        std::cout << "-1" << std::endl;
        return;
    }

    

    permutation.push_back(2);
    permutation.push_back(3);

    for (int i = 4; i <= n; i += 2) {
        permutation.push_back(i);
    }

    for (int i = 1; i <= n; i += 2) {
        if (i != 3) {
            permutation.push_back(i);
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    ll sum = (n * (n + 1)) / 2;

    if (n % 2 == 0 && n <= 2)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> permutation = constructPermutation(n);

        // Print the permutation
        for (int i = 0; i < permutation.size(); i++)
        {
            cout << permutation[i] << " ";
        }
        cout << endl;
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