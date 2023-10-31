#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 

    string a ;
    int  b;
    cin >> a >> b;

    if (a[0] == '-') {
      a.erase(a.begin());
    }
    b = abs(b);

    int ans = 0;

     for (auto c: a) {
      int d = c - '0';
      ans = (1LL * ans * 10 % b + d) % b;
    }
    

    ans == 0 ? cout << "divisible" << endl : cout << "not divisible" << endl;

}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}