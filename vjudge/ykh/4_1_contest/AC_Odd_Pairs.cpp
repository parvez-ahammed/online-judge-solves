#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"


void solve()
{
    int n ;
    cin >> n ;

    int evens = n/2;
    int odds = n - evens;

    cout << 2ll * evens * odds << endl;
}
int32_t main() {

FAST;
int tc;
cin >>tc;
while(tc--)
{
    solve();
}
    return 0;
}