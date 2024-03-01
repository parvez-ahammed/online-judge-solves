#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

     a = 4, b = 2;

    if (a < 5)
        do {
            if (a == b) {

                b = a + b;
                func1(a, b);
            }

        } while (a--);
    switch(b){
        case 1: a--;
        case 2: b = - a*3+5; break; 
        default: a = 0; 
    }

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