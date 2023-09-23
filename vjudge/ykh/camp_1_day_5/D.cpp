#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;

    while (cin >> s) {

        int sz = s.size();

        int val = 0;

        for (int i = 0; i < sz; i++) {

            if (islower(s[i])) {
                val += (s[i] - 'a' + 1);
            } else {
                val += (s[i] - 'A' + 27);
            }
        }

     

        bool prime = true;

        for (int i = 2; i < val; i++) {
            if (val % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            cout << "It is a prime word." << endl;
        } else {
            cout << "It is not a prime word." << endl;
        }
    }
    return 0;
}
