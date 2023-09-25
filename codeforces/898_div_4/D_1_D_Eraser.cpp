#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n , k ;
    string s;
    cin >> n >> k >> s;

    int cnt = 0;
    for (int i = 0 ; i < n ; )
    {
        if (s[i] == 'B')
        {
            cnt ++;

            int j = i ;


            for ( ; j < min (n , i + k) ; j++)
            {
                s[j] = 'W';
            }
            i = j;

        }
        else 
        {
            i++;
        }
    }

    cout << cnt << endl;


}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}