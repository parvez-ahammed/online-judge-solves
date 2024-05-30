#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n ;
    cin >> n;
    string password;
    cin >> password;

   

    for (int i = 0; i < password.size(); i++) {
        if (!islower(password[i]) && !isdigit(password[i])) {
            cout << "NO" << endl;
            return;
        }
    }

  

    for (int i = 0; i < password.size() - 1; i++) {
        if (islower(password[i]) && isdigit(password[i + 1])) {
            cout << "NO" << endl;
            return;
        }
    }

    

    for (int i = 0; i < password.size() - 1; i++) {
        if (isdigit(password[i]) && password[i] > password[i + 1]) {
            cout << "NO" << endl;
            return;
        }
    }

    for (int i = 0; i < password.size() - 1; i++) {
        if (islower(password[i]) && password[i] > password[i + 1]) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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