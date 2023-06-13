#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())

// Sieve of Eratosthenes

void sieveOfEratosthenes(int n, vector<bool> &prime, vector<bool> &primesquare, vector<int> &a)
{
    prime[1] = false;

    for (int i = 4; i <= n; i += 2)
        prime[i] = false;

    primesquare[2 * 2] = true;
    a.push_back(2);

    for (int i = 3; i <= n; i += 2)
    {

        if (prime[i])
        {

            a.push_back(i);
            primesquare[i * i] = true;

            if (i * 1LL * i <= n)
            {
                for (int j = i * i; j <= n; j += i * 2)
                    prime[j] = false;
            }
        }
    }
}

// Function to count divisors
int NOD(int n)
{

    if (n == 1)
        return 1;

    vector<bool> prime(n + 1, true), primesquare(n * n + 1, false);

    vector<int> a;
    sieveOfEratosthenes(n, prime, primesquare, a);

    int ans = 1;

    for (int i = 0;; i++)
    {

        if (a[i] * a[i] * a[i] > n)
            break;

        int powerCount = 1;
        while (n % a[i] == 0)
        {
            n = n / a[i];
            powerCount++;
        }

        ans *= powerCount;
    }

    if (prime[n])
        ans = ans * 2;

    else if (primesquare[n])
        ans = ans * 3;

    else if (n != 1)
        ans = ans * 4;

    return ans;
}

void solve()
{

    int n;
    cin >> n;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;

    vector<pair<int, int>> divCount;

    for (int i = 1000; i >= 1; i--)

        divCount.push_back({NOD(i) * -1, i});

    Sort(divCount);

   
    int i = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        cout << "Case " << i++ << ": " << divCount[1000 - n].second << endl;
    }
    return 0;
}