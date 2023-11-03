#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void findModSum(vector<int>& a, int m)
{
    int sum = 0;

    // for (int i = 1; i < a.size(); i++) {
    //     sum += (m % a[i]);
    // }

    // if (sum == 90)

    //     cout << "For mod = " << m << " sum : " << sum << endl;

    // doing this based on the fact that the maximum contribution one element can do is n -1
    // and we are expecting that such a number exists which

    // (multiple of X -1 % X) = x-1
    // so there exists a lcm of all the number and the M will be lcm -1 , as lcm always exists we can just add the maximum number each time 

    for (int i = 1; i < a.size(); i++) {
        sum += (a[i] - 1);
    }
     cout << sum << endl;
}
void solve()
{

    int n;
    cin >> n;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    findModSum(a, 1);

    // for (int i = 1; i <= 40000; i++) {
    //     findModSum(a, i);
    // }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}