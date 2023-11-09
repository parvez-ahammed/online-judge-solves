
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int F(string X)
{
    int response = 0;
    for (int i = 0; i < N; i++) {
        response = response + abs(S[i] - X[i]);
    }
    return response;
}
void solve() { 

    
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}