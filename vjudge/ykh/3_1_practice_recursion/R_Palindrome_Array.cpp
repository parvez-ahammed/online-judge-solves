#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
int a[100000];
int n;

bool palindrome(int i)
{
    if (i > (n / 2))
        return true;
    if (a[i] == a[n - 1 - i])
        return palindrome(i + 1);
    else
        return false;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;

    rep(0, n) cin >> a[i];

    palindrome(0) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}