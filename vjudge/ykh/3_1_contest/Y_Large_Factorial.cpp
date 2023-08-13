#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

const int MOD = 1000000007;
long long factorial[1005];

void calc()
{
    factorial[0] = 1;
    factorial[1] = 1;
    for (int i = 2; i <= 1000; i++)
        factorial[i] = (factorial[i - 1] * i) % 1000000007;
}

int32_t main()
{

    FAST
    calc();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
     
        cout << factorial[n] << endl;
    }
    return 0;
}