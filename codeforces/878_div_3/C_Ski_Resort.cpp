/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, k, q;
    cin >> n >> k >> q;

    vector<long long> v(n);
    long long totalDays = 0, consDays = 0;
    long long maxConsDays = 0;
    vector<long long> b;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] <= q)
        {
            totalDays++;
            consDays++;
            maxConsDays = max(maxConsDays, consDays);
        }
        else
        {

            maxConsDays = max(maxConsDays, consDays);
            consDays = 0;
        }

        if (consDays >= k)
            ans += consDays - k + 1;
    }

    if (maxConsDays < k || totalDays == 0)
        cout << 0 << endl;
    else
    {
        cout << ans << endl;
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
