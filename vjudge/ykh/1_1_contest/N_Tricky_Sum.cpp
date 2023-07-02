#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    int limit = log2(n);
    // cout << limit << endl;

    long long sum2 = 0;
    long long curr = 1;

    for (int i = 0; i <= limit; i++)
    {
        sum2 += curr;
        // cout << curr << " ";
        curr <<= 1;
    }
    sum2 <<= 1;

    long long sum = (n * (n + 1)) / 2;

    cout << sum - sum2  << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}