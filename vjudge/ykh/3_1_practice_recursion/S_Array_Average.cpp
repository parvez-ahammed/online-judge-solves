#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
int a[200];
int n;



ll findSum(int i)
{
    if (i == n)
        return 0;
    else
        return a[i] + findSum(i + 1);
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    rep(0,n) cin >> a[i];

    cout << fixed  << setprecision(6) << (findSum(0)  * 1.00) / double(n) << endl;


    return 0;
}