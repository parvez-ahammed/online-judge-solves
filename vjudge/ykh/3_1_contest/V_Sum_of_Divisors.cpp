#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int divisors[10000005];

void countDivisorUsingSieve(int n)
{

    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j += i)
            divisors[j]++;
}

int32_t main()
{

    FAST

        int n;
    cin >> n;
    ll cnt = 0;
    countDivisorUsingSieve(n);

    int ans = 0;
    for (int i = 1; i <= n; i++)
        cnt += i * (divisors[i] * 1ll);

    cout << cnt << endl;

    return 0;
}