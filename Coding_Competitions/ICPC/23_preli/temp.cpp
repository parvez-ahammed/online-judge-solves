// Md Abu Omayer Babu

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;

        for (int cnt = 0; cnt <= 25; cnt++) {
            if (x.find(s) != string::npos) {
                cout << cnt << endl;
                break;
            }

            if (x.length() > 110)
                break;
            x += x;
        }
        if (x.find(s) == string::npos) {
            cout << "-1" << endl;
        }
    }

    return 0;
}