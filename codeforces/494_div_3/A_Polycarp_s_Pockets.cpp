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

    map < int , int > mp ;

    int pocket = -1 ;

    for (int i = 0 ; i < n ; i++)
    {

        int x;
        cin >>x;

        mp[x]++;

        pocket = max(pocket , mp[x]);

    }

    cout << pocket << endl;
    return 0;
}