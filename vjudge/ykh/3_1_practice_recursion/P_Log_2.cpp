#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int floor_log2_n(long long n)
{
    if (n == 1)
        return 0;
    return 1 + floor_log2_n(n / 2);
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    cout << floor_log2_n(n) << endl;
    return 0;
}