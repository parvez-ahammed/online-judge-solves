#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int N = 1e6 + 9;
vector<bool> is_prime(N, true);
void sieve()
{
    is_prime[0] = false;
    is_prime[1] = false;

    for (int i = 2; i < N; i++) {
        if (is_prime[i]) {
            for (int j = i + i; j < N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void getAns(ll val)
{
    bool tPrime = false;
    // base line idea is only squares of prime numbers are the ans

    // bool perfectSquare = ((double)(sqrtl(val)) == (floor((double)(sqrtl(val)))));
    // bool rootIsPrime = (is_prime[(int)((sqrtl(val)))]);

    //tPrime = (perfectSquare and rootIsPrime);

    // safer way

    int root = sqrtl(val);

    while (1ll * root * root < val)
        ++root;
    while (1ll * root * root > val)
        --root;
    bool perfectSquare = (1ll * root * root == val);
    bool rootIsPrime = is_prime[root];

    tPrime = (perfectSquare and rootIsPrime);

    cout << (tPrime ? "YES" : "NO") << endl;
}
void solve()
{

    int n;
    cin >> n;
    ll val;
    for (int i = 1; i <= n; i++) {

        cin >> val;

        getAns(val);
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}