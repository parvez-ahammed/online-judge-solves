#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >> n ;
    int ans = -1;

    string s;
    cin >> s;


    for (int i = 0 ; i < n -2; i++)
    {
        if (s[i] == 'A' and s[i + 1] == 'B' and s[i + 2] == 'C')
        {
            ans = i + 1;
            break;
        }
        
    }

    cout << ans << endl;
    return 0;
}