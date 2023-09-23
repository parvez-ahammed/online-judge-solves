#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s ;

    int ans = 0 ;

 

    for (int i = 0; i < s.size(); ) {
        int cnt = 0 ;
        int j = i ;

        for (; j < s.size(); j++) {
            if (s[i] == s[j]) {
                cnt++;
            }
            else {
                break;
            }
        }
        i = j ;
        ans = max(ans, cnt);
    }



    cout << ans << endl ;
    return 0;
}