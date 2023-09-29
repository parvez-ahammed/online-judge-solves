#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    int tc;
    cin >> tc;
    while (tc--)
    {
        double x;
        cin >> x;

        double incomePerInsurance = x * .2;

        cout << ceil(100/incomePerInsurance) << endl;
    }
    return 0;
}