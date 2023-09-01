#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s , t;
    cin >> s >> t;


    int n = s.size();
    int m = t.size();


    int cnt = 0;

    for (int i = n - 1, j = m - 1; i >= 0 and j >= 0; i--, j--) {
        if (s[i] == t[j]) {
            cnt++;
        }
        else {
            break;
        }
    }


    cout << n + m - (2 * cnt) << endl;


    return 0;
}