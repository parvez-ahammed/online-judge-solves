#include <bits/stdc++.h>
using namespace std;
#define FAST  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define endl "\n"


int countDivisors(int x)
{
    int cnt = 0;

    for (int i = 1; i * i <= x; i++)

    {
        if (x % i == 0)
            cnt += ((x / i == i) ? 1 : 2);
    }

    return cnt;
}

int32_t main()
{
    FAST
   

    int tc;
    cin >> tc;
    while (tc--)
    {
        int x;
        cin >> x;
        cout << countDivisors(x) << endl;
    }
    return 0;
}