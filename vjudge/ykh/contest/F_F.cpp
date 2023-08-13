#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int32_t main()
{

    FAST;

    int n;
    cin >> n;

    ll sum = 0 , sum2 = 0;
    ll temp = 0;


    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        sum +=temp;
        sum2 ^= temp;
    }



    cout << sum  - sum2<< endl;
    return 0;
}