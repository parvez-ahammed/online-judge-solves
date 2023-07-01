#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double factorial(int n)
{
    long long res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int main()
{
    double n;
    cin >> n;
    double m;
    long long res = 1;
    while (n--)
    {
        cin >> m;
        if (m == 0)
        {
            res = 1;
        }
        else
        {
            res = factorial(m);
        }

        cout << res << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t ;
// 	cin >> t ;
// 	while (t--){
// 		long long x,ans = 1 ;
// 		cin >> x;
// 		while(x){
// 			ans *= x ;
// 			x--;
// 		}
// 		cout << ans << endl;
// 	}

// 	return 0;
// }