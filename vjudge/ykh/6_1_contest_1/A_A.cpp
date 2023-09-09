#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int a;
    cin >> a ;

    for (int i =1 ; i <= a ; i++)
    {
        if (a % i == 0)
            cout << i <<endl;
    }
    return 0;
}