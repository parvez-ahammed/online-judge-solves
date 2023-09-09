#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , d;
   
    // Given two integers N and D, you will have to find how many of the factors of N! (factorial N) are divisible by D

    while (cin >> n >> d)
    {
        if (n == 0 && d == 0)
            break;

        int ans = 0;

        for (int i = 1; i * i <= d; i++)
        {
            if (d % i == 0)
            {
                if (i <= n)
                    ans++;
                if (i != d / i && d / i <= n)
                    ans++;
            }
        }

        cout << n << " " << d << " " << ans + 1 << endl;
    }
    return 0;
}