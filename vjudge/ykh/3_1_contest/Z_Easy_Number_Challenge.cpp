#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

const int MOD = 1073741824;
const int MAX = 1e6 + 5;

int diviors[1000009];

void calc()
{

    for (int i = 1; i <= MAX; i++)
        for (int j = i; j <= MAX; j += i)
            diviors[j]++;
}

int32_t main()
{

    calc();
    FAST int a, b, c;
    cin >> a >> b >> c;

    ll cnt = 0;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                int val = i * j * k;
                cnt += diviors[val] % MOD;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}