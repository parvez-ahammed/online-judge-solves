#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

vector<bool> mark(1000005, true);
vector<int> primes;

vector<int> amir_prime;

void sieve(int n)
{

    mark[0] = mark[1] = false;

    for (int i = 4; i <= n; i += 2)
        mark[i] = false;

    primes.push_back(2);

    for (int i = 3; i <= n; i += 2)
    {
        if (!mark[i])
        {
            primes.push_back(i);

            if (i * i <= n + 2)
            {
                for (int j = i * i; j <= n; j += i * 2)
                    mark[j] = false;
            }
        }
    }
}



int calc_amir(int b)
{
    int total_unique_prime = amir_prime.size();
    int up = upper_bound(amir_prime.begin(), amir_prime.end(), b) - amir_prime.begin();

    int point = total_unique_prime - up;

    return point;
}

int calc_monir(int b, vector<int> &a)
{
    int n = a.size();

    int cnt = 0;


  

    return cnt;
}

void solve()
{

    sieve(100005);
    map<int, bool> taken;

    int n, m;

    cin >> n >> m;

    vector<int> a(n);
    rep(0, n)
    {
        cin >> a[i];

        if (mark[a[i]] && !taken[a[i]])
        {
            amir_prime.push_back(a[i]);
            taken[a[i]] = true;
        }
    }
    sort(amir_prime.begin(), amir_prime.end());

    

    int monir_point = 0, amir_point = 0;

    rep(0, m)
    {
        int b;
        cin >> b;

        if ((b & 1))
            amir_point += calc_amir(b);
        else
            monir_point += calc_monir(b, a);
    }

    monir_point > amir_point ? cout << 1  : cout << 0 ;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}
